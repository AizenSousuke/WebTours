Action()
{

	web_websocket_connect("ID=0", 
		"URI=ws://127.0.0.1:1001/?cid=201680149", 
		"Origin=chrome-extension://ngpampappnmepgilojfohadhhmbhlaek", 
		"OnOpenCB=OnOpenCB0", 
		"OnMessageCB=OnMessageCB0", 
		"OnErrorCB=OnErrorCB0", 
		"OnCloseCB=OnCloseCB0", 
		LAST);

	web_websocket_send("ID=0", 
		"Buffer/Bin="
		"\\x4D\\x53\\x47\\x23\\x31\\x23\\x32\\x23\\x31\\x23\\x30\\x3A\\x37\\x3A\\x31\\x37\\x3A\\x37\\x3A\\x30\\x2C\\x31\\x31\\x32\\x3D\\x31\\x39\\x3A\\x43\\x68\\x72\\x6F\\x6D\\x65\\x2F\\x37\\x37\\x2E\\x30\\x2E\\x33\\x38\\x36\\x35\\x2E\\x37\\x35\\x2C\\x31\\x31\\x33\\x3D\\x31\\x39\\x3A\\x43\\x68\\x72\\x6F\\x6D\\x65\\x2F\\x37\\x37\\x2E\\x30\\x2E\\x33\\x38\\x36\\x35\\x2E\\x37\\x35\\x2C\\x31\\x31\\x34\\x3D\\x32\\x37\\x3A\\x43\\x68\\x72\\x6F\\x6D\\x65\\x5F\\x52\\x65\\x6E\\x64\\x65\\x72\\x57\\x69\\x64\\x67\\x65\\"
		"x74\\x48\\x6F\\x73\\x74\\x48\\x57\\x4E\\x44\\x2C\\x31\\x31\\x36\\x3D\\x35\\x3A\\x65\\x6E\\x2D\\x55\\x53\\x3B", 
		"IsBinary=1", 
		LAST);

	/*Connection ID 0 received buffer WebSocketReceive0*/

	/*Connection ID 0 received buffer WebSocketReceive1*/

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_auto_header("Sec-Fetch-User", 
		"?1");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("webtours", 
		"URL=http://127.0.0.1:1080/webtours", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		LAST);

	web_revert_auto_header("Sec-Fetch-User");

	web_add_auto_header("Sec-Fetch-Mode", 
		"nested-navigate");

	web_revert_auto_header("Upgrade-Insecure-Requests");

	web_add_header("Origin", 
		"http://127.0.0.1:1080");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	lr_think_time(6);

	web_submit_form("login.pl", 
		"Snapshot=t3.inf", 
		ITEMDATA, 
		"Name=username", "Value=jojo", ENDITEM, 
		"Name=password", "Value=bean", ENDITEM, 
		LAST);

	web_add_auto_header("Sec-Fetch-User", 
		"?1");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	web_image("Search Flights Button", 
		"Alt=Search Flights Button", 
		"Snapshot=t4.inf", 
		LAST);

	web_add_auto_header("Origin", 
		"http://127.0.0.1:1080");

/* Added by Async CodeGen.
ID=Poll_0
ScanType = Recording

The following URLs are considered part of this conversation:
	http://127.0.0.1:1080/cgi-bin/reservations.pl

TODO - The following callbacks have been added to AsyncCallbacks.c.
Add your code to the callback implementations as necessary.
	Poll_0_RequestCB
	Poll_0_ResponseCB
 */
	web_reg_async_attributes("ID=Poll_0", 
		"Pattern=Poll", 
		"URL=http://127.0.0.1:1080/cgi-bin/reservations.pl", 
		"PollIntervalMs=900", 
		"RequestCB=Poll_0_RequestCB", 
		"ResponseCB=Poll_0_ResponseCB", 
		LAST);

	web_submit_form("reservations.pl",
		"Snapshot=t5.inf",
		ITEMDATA,
		"Name=depart", "Value=Denver", ENDITEM,
		"Name=departDate", "Value=09/19/2019", ENDITEM,
		"Name=arrive", "Value=London", ENDITEM,
		"Name=returnDate", "Value=09/20/2019", ENDITEM,
		"Name=numPassengers", "Value=1", ENDITEM,
		"Name=roundtrip", "Value=<OFF>", ENDITEM,
		"Name=seatPref", "Value={seat}", ENDITEM,
		"Name=seatType", "Value=Coach", ENDITEM,
		LAST);

/* Removed by Async CodeGen.
ID = Poll_0
 */
	/*
 web_submit_form("reservations.pl_2",
		"Snapshot=t6.inf",
		ITEMDATA,
		"Name=outboundFlight", "Value=020;338;09/19/2019", ENDITEM,
		"Name=reserveFlights.x", "Value=41", ENDITEM,
		"Name=reserveFlights.y", "Value=7", ENDITEM,
		LAST); 
	*/

	web_revert_auto_header("Origin");

	web_revert_auto_header("Sec-Fetch-User");

	web_revert_auto_header("Upgrade-Insecure-Requests");

	web_add_header("Origin", 
		"http://127.0.0.1:1080");

/* Removed by Async CodeGen.
ID = Poll_0
 */
	/*
 web_submit_form("reservations.pl_3",
		"Snapshot=t7.inf",
		ITEMDATA,
		"Name=firstName", "Value=Jojo", ENDITEM,
		"Name=lastName", "Value=Bean", ENDITEM,
		"Name=address1", "Value=", ENDITEM,
		"Name=address2", "Value=", ENDITEM,
		"Name=pass1", "Value=Jojo Bean", ENDITEM,
		"Name=creditCard", "Value=", ENDITEM,
		"Name=expDate", "Value=", ENDITEM,
		"Name=saveCC", "Value=<OFF>", ENDITEM,
		LAST); 
	*/

/* Added by Async CodeGen.
ID = Poll_0
 */
	web_stop_async("ID=Poll_0", 
		LAST);

	web_add_auto_header("Sec-Fetch-User", 
		"?1");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	web_image("Itinerary Button", 
		"Alt=Itinerary Button", 
		"Snapshot=t8.inf", 
		LAST);

	web_revert_auto_header("Sec-Fetch-User");

	web_image("SignOff Button", 
		"Alt=SignOff Button", 
		"Snapshot=t9.inf", 
		LAST);

	return 0;
}