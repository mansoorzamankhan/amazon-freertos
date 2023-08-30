/*
 * FreeRTOS V201906.00 Major
 * Copyright (C) 2020 Amazon.com, Inc. or its affiliates.  All Rights Reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy of
 * this software and associated documentation files (the "Software"), to deal in
 * the Software without restriction, including without limitation the rights to
 * use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of
 * the Software, and to permit persons to whom the Software is furnished to do so,
 * subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
 * FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
 * COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
 * IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 *
 * http://aws.amazon.com/freertos
 * http://www.FreeRTOS.org
 */

#ifndef AWS_CLIENT_CREDENTIAL_KEYS_H
#define AWS_CLIENT_CREDENTIAL_KEYS_H

/*
 * PEM-encoded client certificate
 *
 * Must include the PEM header and footer:
 * "-----BEGIN CERTIFICATE-----\n"\
 * "...base64 data...\n"\
 * "-----END CERTIFICATE-----\n"
 */
#define keyCLIENT_CERTIFICATE_PEM \
"-----BEGIN CERTIFICATE-----\n"\
"MIIDWTCCAkGgAwIBAgIUKpQSmtnPoVl+3Yy9dGEKKqBOyrQwDQYJKoZIhvcNAQEL\n"\
"BQAwTTFLMEkGA1UECwxCQW1hem9uIFdlYiBTZXJ2aWNlcyBPPUFtYXpvbi5jb20g\n"\
"SW5jLiBMPVNlYXR0bGUgU1Q9V2FzaGluZ3RvbiBDPVVTMB4XDTIzMDgyOTEyNDY1\n"\
"MVoXDTQ5MTIzMTIzNTk1OVowHjEcMBoGA1UEAwwTQVdTIElvVCBDZXJ0aWZpY2F0\n"\
"ZTCCASIwDQYJKoZIhvcNAQEBBQADggEPADCCAQoCggEBALRoJ0OQpAITf0XRwz1K\n"\
"nSVtNJBpWCQSfeSWoVk20H38NFNRloO306Hd9Sf+CkSThrFW50IJ1Tpb1cVd5ZLi\n"\
"x3MFDp6p4GGZuNxTWv4DGy0NgOiFRKuTlJXgJk5CxkG4J7ntZ+VZGwUVc1iTuYPZ\n"\
"WjAJ28XZWdCrAxrqHxKoOIfPuEsxES2QmxuzALZmfagoGBUmPEApF3YbljPhYSDQ\n"\
"0QfhYqcrYv34Jr65K9ekVkjDAL781UEt54ggwfXhDN5VEZk48dGswv+LX6OuCLdx\n"\
"aqH3hfASsW19L6m7S6ESCvzkGjq2hhLUqB455x/4AlS8sNh9COj/MI/5FXeAe4df\n"\
"vw8CAwEAAaNgMF4wHwYDVR0jBBgwFoAUpNrQB4S3AIJQDxGqkYdTXim8J1cwHQYD\n"\
"VR0OBBYEFPxC8jZFmsERflZy4qgSHwiMBA+xMAwGA1UdEwEB/wQCMAAwDgYDVR0P\n"\
"AQH/BAQDAgeAMA0GCSqGSIb3DQEBCwUAA4IBAQBAVclB4NsMrBmpBtt/ontJIVA+\n"\
"MlAHeJPBXFkb8jMTMLNtBgfmoX9l5bTKGQduskKy6d3e0XUH3SURMxkRCcbvUsvD\n"\
"It0ARXCBaJTLDWi+TV3YJXWFoI+ycCamCBmACHjL/6oibAq7+BRwuB2DG9CTXWRo\n"\
"oqXPnhNpZ1IehyTxcbkYqw51G0uMRkOPhuIODPQ7f1HDt/M5Ay2AbPD0WVhnag5u\n"\
"HehZpsfYr0H009M2aejUqqY7Jmb1EnvSgUAhq3G0PrCtj/gdZiynlko0eKs6xlVZ\n"\
"f04q6XhY9U52hYmkAiXzWL28KE17V84FG3CgPgQcqwxLIK6YUjnYioNBNMCQ\n"\
"-----END CERTIFICATE-----\n"

/*
 * PEM-encoded issuer certificate for AWS IoT Just In Time Registration (JITR).
 * This is required if you're using JITR, since the issuer (Certificate 
 * Authority) of the client certificate is used by the server for routing the 
 * device's initial request. (The device client certificate must always be 
 * sent as well.) For more information about JITR, see:
 *  https://docs.aws.amazon.com/iot/latest/developerguide/jit-provisioning.html, 
 *  https://aws.amazon.com/blogs/iot/just-in-time-registration-of-device-certificates-on-aws-iot/.
 *
 * If you're not using JITR, set below to NULL.
 * 
 * Must include the PEM header and footer:
 * "-----BEGIN CERTIFICATE-----\n"\
 * "...base64 data...\n"\
 * "-----END CERTIFICATE-----\n"
 */
#define keyJITR_DEVICE_CERTIFICATE_AUTHORITY_PEM  NULL

/*
 * PEM-encoded client private key.
 *
 * Must include the PEM header and footer:
 * "-----BEGIN RSA PRIVATE KEY-----\n"\
 * "...base64 data...\n"\
 * "-----END RSA PRIVATE KEY-----\n"
 */
#define keyCLIENT_PRIVATE_KEY_PEM \
"-----BEGIN RSA PRIVATE KEY-----\n"\
"MIIEpAIBAAKCAQEAtGgnQ5CkAhN/RdHDPUqdJW00kGlYJBJ95JahWTbQffw0U1GW\n"\
"g7fTod31J/4KRJOGsVbnQgnVOlvVxV3lkuLHcwUOnqngYZm43FNa/gMbLQ2A6IVE\n"\
"q5OUleAmTkLGQbgnue1n5VkbBRVzWJO5g9laMAnbxdlZ0KsDGuofEqg4h8+4SzER\n"\
"LZCbG7MAtmZ9qCgYFSY8QCkXdhuWM+FhINDRB+Fipyti/fgmvrkr16RWSMMAvvzV\n"\
"QS3niCDB9eEM3lURmTjx0azC/4tfo64It3FqofeF8BKxbX0vqbtLoRIK/OQaOraG\n"\
"EtSoHjnnH/gCVLyw2H0I6P8wj/kVd4B7h1+/DwIDAQABAoIBAFhh6lJ8iw0FVkXz\n"\
"VQ4y/rf2P1k8ctUBRjH15cgaRZxjMZNcFjwjlAfqAI/+MjOUftlktNkyjgcQNLOD\n"\
"o9QJTCM6aAYtPWMzd1BheeOVy/uPcQb5O0I/g/zFGp8esZhCyxuYhlzjAYzFDIRp\n"\
"oupIUpnUSposOIc1MMk/x8dRKJjHxGG5S9dGNyz1T9UKeSyiRxsWlDriFdQV+7ri\n"\
"bj8LxJpSXMLNFEtWXOVQpA37fdH1C0Iyflx/Z7klhHckDgQi1rKu1kAsc52XQ3ZR\n"\
"AIHzOudSPROnhStiVWP3ShDE+hQC9HDyRAg3jrdA8LgSU2rB0O0rm60Aeq23GMd6\n"\
"2VbhO8kCgYEA7cCLk4csalDR3jJpXTNgzDuSA+056TJgczjUdIGR2snyrPE4VZYH\n"\
"KgwuJCBGT+pga9tXmbisIdDtuRpsfrbbqQzP4KgqH4PTO+sG2oum7ocJtksE8GQs\n"\
"02HaDDI0qke/OMc7O4s1Jgr28aAS8tSi2kUP4YqGKPWoKe5byIi+EdsCgYEAwkDd\n"\
"HcYkCJThTc7ZF/KgRt8jj+pWZ+cI0oXTPn8Y6nj5rjLUQjG1naJF8C6WmOg4pekP\n"\
"sjNUYNtAvGM+vfHi+AApwFQO9IINFD+XE1tq9RaXHy39to1dRWcjToCQswpWxCho\n"\
"L+s8vi4F1/NGz05u4mR5oBSdT5m6VOYXbtlDj90CgYEAhnWGeoDQFbBvgIJyJEuS\n"\
"Su7FvYLEZaYf9goF3X4Jxvq/TB+ABKc8lgMddUDrgvbCYT1DZaSTdOx8BVt0UJWJ\n"\
"1Slxx1RTvk8Hf7ODxMWGOxAT5gy3VlzRHRsR/iPGtSaudqX2Uc6A2GsLDcvB66Nm\n"\
"FptIR/3XsgJ8gHpVXiw3klECgYAl39O8/GcGLVEIhK4bVzkc2GDsrHoQZCF6OpGH\n"\
"e+x1uwSjjFGKXnrUs1EDlXHTemOhJaHj0tI+2ED0+jy/eCwSwqVhVIJd9gVqz0M7\n"\
"iPV/t9nbQHJZZ5Kp94QQyExuPDPSpzY5MZp0UjDdfBdwUBCan5B/P8W0QXrtFre2\n"\
"6zGbGQKBgQCkshb7gZdUGzz+3U9GxYKoyzC4slYkoVBYUoQlnlip5j/ItVZ98yT5\n"\
"bFEZ/gWQ9Lb2PhQeQ9cQfv4DtDsa584ISn7HRMh5nLfzNF5rDdlAYtb8vI7eOxOa\n"\
"cr1A0kXGjZ3CBzpjzCeN+gYDpbnQxyFDGdYqfYpkySxbke8eZhZ8bA==\n"\
"-----END RSA PRIVATE KEY-----\n"


#endif /* AWS_CLIENT_CREDENTIAL_KEYS_H */
