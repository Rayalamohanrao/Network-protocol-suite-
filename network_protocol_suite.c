/*
 * Network Protocol Suite - C Demonstration Program
 *
 * This program displays the layers of the TCP/IP protocol suite
 * and examples of protocols used at each layer.
 *
 * Compile:
 *   gcc network_protocol_suite.c -o network_protocol_suite
 *
 * Run:
 *   ./network_protocol_suite
 *
 * Note: This is an educational demonstration. It does not implement
 * actual network communication.
 */

#include <stdio.h>

int main(void)
{
    printf("====================================\n");
    printf("       TCP/IP PROTOCOL SUITE\n");
    printf("====================================\n\n");

    printf("1. APPLICATION LAYER\n");
    printf("   Examples: HTTP, HTTPS, FTP, SMTP, DNS\n");
    printf("   Purpose : Provides network services to applications.\n\n");

    printf("2. TRANSPORT LAYER\n");
    printf("   Examples: TCP, UDP\n");
    printf("   Purpose : Provides end-to-end data transport.\n\n");

    printf("3. INTERNET LAYER\n");
    printf("   Examples: IP, ICMP\n");
    printf("   Purpose : Handles logical addressing and packet routing.\n\n");

    printf("4. NETWORK ACCESS LAYER\n");
    printf("   Examples: Ethernet, Wi-Fi\n");
    printf("   Purpose : Transfers data over the local network medium.\n\n");

    printf("Data flow through the TCP/IP layers:\n");
    printf("Application Layer\n");
    printf("       |\n");
    printf("       v\n");
    printf("Transport Layer\n");
    printf("       |\n");
    printf("       v\n");
    printf("Internet Layer\n");
    printf("       |\n");
    printf("       v\n");
    printf("Network Access Layer\n");

    return 0;
}
