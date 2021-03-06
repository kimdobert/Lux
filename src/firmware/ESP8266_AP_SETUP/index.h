const char MAIN_page[] PROGMEM = R"=====(
<!--Color Scheme: #E85A4F, #EAE7DC, #D8C3A5, #8E8D8A, #E98074-->
<!DOCTYPE html>
<html>
	<head>
		<title>LUX Configuration</title>
		<style>
			body{
				font-family: sans-serif;
				background-color: #EAE7DC;
			}

			#settings{
				width: 40%;
				height: auto;
				color: #E85A4F;
				padding-top: 1%;
				padding-bottom: 2%;
				background-color: none;
			}

			.addr{
				width: 40px;
			}
		</style>
	</head>

	<body>
		<center>
		<div id="settings">
			<center>
				<form name="configuration">
					<h1>LUX Network Configuration</h1>
					<hr>
					SSID: <input type="text" name="network_ssid" value=""><br>
					Password: <input type="password" name="network_pwrd" value=""><br><br>
					Hub IP Address:
					<input class="addr" type="text" name="hub_ip_0" value="192">
					. <input class="addr" type="text" name="hub_ip_1" value="168">
					. <input class="addr" type="text" name="hub_ip_2" value="4">
					. <input class="addr" type="text" name="hub_ip_3" value="6">
					: <input class="addr" type="text" name="hub_port" value="80"><br><br>
					<input name="Submit"  type="submit" value="Apply Configuration"/>
				</form> 
		</center>
		</div>
	</body>
	</center>
</html>
)=====";
