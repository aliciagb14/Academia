FROM debian:buster
ENV AUTOINDEX=on

RUN apt-get update && apt-get install -y procps && apt-get install nano
RUN apt-get -y install php7.3-fpm php7.3-common php7.3-mysql php7.3-gmp php7.3-curl php7.3-intl php7.3-mbstring php7.3-xmlrpc php7.3-gd php7.3-xml php7.3-cli php7.3-zip php7.3-soap php7.3-imap
RUN apt-get -y install wget
RUN apt-get -y install nginx
RUN apt-get -y install mariadb-server

COPY ./srcs/start.sh ./
COPY ./srcs/nginx-conf_on /tmp/nginx-conf_on
COPY ./srcs/nginx-conf_off /tmp/nginx-conf_off
COPY ./srcs/index.html /var/www/html/
COPY ./srcs/phpmyadmin.inc.php /tmp/phpmyadmin.inc.php
COPY ./srcs/wp-config.php /tmp/wp-config.php

EXPOSE 80 443

CMD bash start.sh