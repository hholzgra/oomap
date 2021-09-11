<Layer name="contours_layer" status="on" srs="&srs900913;">
    <StyleName>contours_simple_style</StyleName>
    <Datasource>
        <Parameter name="type">postgis</Parameter>
        <Parameter name="table">(SELECT way,ele FROM contours WHERE ele::INTEGER % 50 != 0) AS contours</Parameter>
        <Parameter name="dbname">contours</Parameter>
        <Parameter name="host">gis-db</Parameter>
        <Parameter name="user">maposmatic</Parameter>
        <Parameter name="password">secret</Parameter>
        <Parameter name="estimate_extent">false</Parameter>
        <Parameter name="extent">-20037508,-19929239,20037508,19929239</Parameter>
    </Datasource>
</Layer>

<Layer name="contours_simple_major" status="on" srs="&srs900913;">
    <StyleName>contours_simple_style_major</StyleName>
    <Datasource>
        <Parameter name="type">postgis</Parameter>
        <Parameter name="table">(SELECT way,ele FROM contours WHERE ele::INTEGER % 50 = 0) AS contours</Parameter>
        <Parameter name="dbname">contours</Parameter>
        <Parameter name="host">gis-db</Parameter>
        <Parameter name="user">maposmatic</Parameter>
        <Parameter name="password">secret</Parameter>
        <Parameter name="estimate_extent">false</Parameter>
        <Parameter name="extent">-20037508,-19929239,20037508,19929239</Parameter>
    </Datasource>
</Layer>

