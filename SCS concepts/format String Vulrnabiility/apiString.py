#!/usr/bin/env python3
# -*- coding: utf-8 -*-

config = {
    'API_KEY' : "212817d980b9a03add91e5814d02"
}

class API(object):
    def __init__(self, apikey):
        self.apikey = apikey

    def renderHTML(self, templateHTML, title, text):
        return (templateHTML.format(self=self, title=title, text=text))

if __name__ == '__main__':
    a = API(config[API_KEY])

    templateHTML = """<!DOCTYPE html>
<html lang="en" dir="ltr">
    <head>
        <meta charset="utf-8">
        <title>{title}</title>
    </head>
    <body>
        <p>{text}</p>
    </body>
</html>"""

    text = "text"
    print(a.renderHTML(templateHTML, "Vuln web render App", text))