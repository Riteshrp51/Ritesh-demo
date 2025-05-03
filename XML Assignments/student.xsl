<?xml version="1.0" encoding="UTF-8"?>
<xsl:stylesheet version="1.0"
    xmlns:xsl="http://www.w3.org/1999/XSL/Transform">

    <xsl:template match="/students">
    <html>
    <head>
        <title>Student Details</title>
    </head>
    <body>
        <h2>Students</h2>
        <xsl:for-each select="student">
        <div style="border:1px; background-color:aliceblue; solid black; padding:10px; margin:10px;">
            <p><strong>Name:</strong><xsl:value-of select="name"/></p>
             <p><strong>Course:</strong><xsl:value-of select="course"/></p>
              <p><strong>College:</strong><xsl:value-of select="college"/></p>
        </div>
        </xsl:for-each>
        </body>
        </html>
        </xsl:template>
    </xsl:stylesheet>