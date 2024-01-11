#pragma once
#include <iostream>

#using <System.dll>
#using <System.Net.dll>

using namespace System;
using namespace System::Net;
using namespace System::Net::Mail;
using namespace System::ComponentModel;
using namespace System::Collections;



ref class EmailService
{
	SmtpClient^ client;

public:
	EmailService() { }


	String^ SendRandomCode(String^ email)
	{
		SmtpClient^ client = gcnew SmtpClient("smtp.gmail.com");
		client->Port = 587; // Порт сервера
		client->Credentials = gcnew NetworkCredential("", "");
		client->EnableSsl = true; // Включаємо SSL

		MailMessage^ mailMessage = gcnew MailMessage("", email);
		mailMessage->Subject = "Avia Tickets Verify";

		Random^ random = gcnew Random(static_cast<int>(DateTime::Now.Ticks));

		int randomNumber = random->Next(1000, 10000);

		mailMessage->Body = randomNumber.ToString();
		client->Send(mailMessage);

		String^ resultCode = gcnew String("");

		resultCode = randomNumber.ToString();

		return resultCode;
	}
};

