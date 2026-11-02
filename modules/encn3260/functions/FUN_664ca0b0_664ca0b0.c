/* Module: encn3260.dll
   Function: FUN_664ca0b0
   Address: 664ca0b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_664ca0b0(int *param_1)

{
  HMODULE pHVar1;
  FARPROC pFVar2;
  
  pHVar1 = (HMODULE)param_1[1];
  if (pHVar1 != (HMODULE)0x0) {
    if (*param_1 != 0) {
      return 1;
    }
    if (pHVar1 != (HMODULE)0x0) {
      FreeLibrary(pHVar1);
      param_1[1] = 0;
    }
  }
  pHVar1 = LoadLibraryA(s_WSOCK32_DLL_664efe88);
  param_1[1] = (int)pHVar1;
  if ((HMODULE)0x20 < pHVar1) {
    pFVar2 = GetProcAddress(pHVar1,s_accept_664efe80);
    *(FARPROC *)((int)param_1 + 9) = pFVar2;
    pFVar2 = GetProcAddress((HMODULE)param_1[1],&DAT_664efe78);
    *(FARPROC *)((int)param_1 + 0xd) = pFVar2;
    pFVar2 = GetProcAddress((HMODULE)param_1[1],s_closesocket_664efe6c);
    *(FARPROC *)((int)param_1 + 0x11) = pFVar2;
    pFVar2 = GetProcAddress((HMODULE)param_1[1],s_connect_664efe64);
    *(FARPROC *)((int)param_1 + 0x15) = pFVar2;
    pFVar2 = GetProcAddress((HMODULE)param_1[1],s_ioctlsocket_664efe58);
    *(FARPROC *)((int)param_1 + 0x19) = pFVar2;
    pFVar2 = GetProcAddress((HMODULE)param_1[1],s_getpeername_664efe4c);
    *(FARPROC *)((int)param_1 + 0x1d) = pFVar2;
    pFVar2 = GetProcAddress((HMODULE)param_1[1],s_getsockname_664efe40);
    *(FARPROC *)((int)param_1 + 0x21) = pFVar2;
    pFVar2 = GetProcAddress((HMODULE)param_1[1],s_getsockopt_664efe34);
    *(FARPROC *)((int)param_1 + 0x25) = pFVar2;
    pFVar2 = GetProcAddress((HMODULE)param_1[1],s_htonl_664efe2c);
    *(FARPROC *)((int)param_1 + 0x29) = pFVar2;
    pFVar2 = GetProcAddress((HMODULE)param_1[1],s_htons_664efe24);
    *(FARPROC *)((int)param_1 + 0x2d) = pFVar2;
    pFVar2 = GetProcAddress((HMODULE)param_1[1],s_inet_addr_664efe18);
    *(FARPROC *)((int)param_1 + 0x31) = pFVar2;
    pFVar2 = GetProcAddress((HMODULE)param_1[1],s_inet_ntoa_664efe0c);
    *(FARPROC *)((int)param_1 + 0x35) = pFVar2;
    pFVar2 = GetProcAddress((HMODULE)param_1[1],s_listen_664efe04);
    *(FARPROC *)((int)param_1 + 0x39) = pFVar2;
    pFVar2 = GetProcAddress((HMODULE)param_1[1],s_ntohl_664efdfc);
    *(FARPROC *)((int)param_1 + 0x3d) = pFVar2;
    pFVar2 = GetProcAddress((HMODULE)param_1[1],s_ntohs_664efdf4);
    *(FARPROC *)((int)param_1 + 0x41) = pFVar2;
    pFVar2 = GetProcAddress((HMODULE)param_1[1],&DAT_664efdec);
    *(FARPROC *)((int)param_1 + 0x45) = pFVar2;
    pFVar2 = GetProcAddress((HMODULE)param_1[1],s_recvfrom_664efde0);
    *(FARPROC *)((int)param_1 + 0x49) = pFVar2;
    pFVar2 = GetProcAddress((HMODULE)param_1[1],s_select_664efdd8);
    *(FARPROC *)((int)param_1 + 0x4d) = pFVar2;
    pFVar2 = GetProcAddress((HMODULE)param_1[1],&DAT_664efdd0);
    *(FARPROC *)((int)param_1 + 0x51) = pFVar2;
    pFVar2 = GetProcAddress((HMODULE)param_1[1],s_sendto_664efdc8);
    *(FARPROC *)((int)param_1 + 0x55) = pFVar2;
    pFVar2 = GetProcAddress((HMODULE)param_1[1],s_setsockopt_664efdbc);
    *(FARPROC *)((int)param_1 + 0x59) = pFVar2;
    pFVar2 = GetProcAddress((HMODULE)param_1[1],s_shutdown_664efdb0);
    *(FARPROC *)((int)param_1 + 0x5d) = pFVar2;
    pFVar2 = GetProcAddress((HMODULE)param_1[1],s_socket_664efda8);
    *(FARPROC *)((int)param_1 + 0x61) = pFVar2;
    pFVar2 = GetProcAddress((HMODULE)param_1[1],s_gethostbyaddr_664efd98);
    *(FARPROC *)((int)param_1 + 0x65) = pFVar2;
    pFVar2 = GetProcAddress((HMODULE)param_1[1],s_gethostbyname_664efd88);
    *(FARPROC *)((int)param_1 + 0x69) = pFVar2;
    pFVar2 = GetProcAddress((HMODULE)param_1[1],s_gethostname_664efd7c);
    *(FARPROC *)((int)param_1 + 0x6d) = pFVar2;
    pFVar2 = GetProcAddress((HMODULE)param_1[1],s_getservbyport_664efd6c);
    *(FARPROC *)((int)param_1 + 0x71) = pFVar2;
    pFVar2 = GetProcAddress((HMODULE)param_1[1],s_getservbyname_664efd5c);
    *(FARPROC *)((int)param_1 + 0x75) = pFVar2;
    pFVar2 = GetProcAddress((HMODULE)param_1[1],s_getprotobynumber_664efd48);
    *(FARPROC *)((int)param_1 + 0x79) = pFVar2;
    pFVar2 = GetProcAddress((HMODULE)param_1[1],s_getprotobyname_664efd38);
    *(FARPROC *)((int)param_1 + 0x7d) = pFVar2;
    pFVar2 = GetProcAddress((HMODULE)param_1[1],s_WSAStartup_664efd2c);
    *(FARPROC *)((int)param_1 + 0x81) = pFVar2;
    pFVar2 = GetProcAddress((HMODULE)param_1[1],s_WSACleanup_664efd20);
    *(FARPROC *)((int)param_1 + 0x85) = pFVar2;
    pFVar2 = GetProcAddress((HMODULE)param_1[1],s_WSASetLastError_664efd10);
    *(FARPROC *)((int)param_1 + 0x89) = pFVar2;
    pFVar2 = GetProcAddress((HMODULE)param_1[1],s_WSAGetLastError_664efd00);
    *(FARPROC *)((int)param_1 + 0x8d) = pFVar2;
    pFVar2 = GetProcAddress((HMODULE)param_1[1],s_WSAIsBlocking_664efcf0);
    *(FARPROC *)((int)param_1 + 0x91) = pFVar2;
    pFVar2 = GetProcAddress((HMODULE)param_1[1],s_WSAUnhookBlockingHook_664efcd8);
    *(FARPROC *)((int)param_1 + 0x95) = pFVar2;
    pFVar2 = GetProcAddress((HMODULE)param_1[1],s_WSASetBlockingHook_664efcc4);
    *(FARPROC *)((int)param_1 + 0x99) = pFVar2;
    pFVar2 = GetProcAddress((HMODULE)param_1[1],s_WSACancelBlockingCall_664efcac);
    *(FARPROC *)((int)param_1 + 0x9d) = pFVar2;
    pFVar2 = GetProcAddress((HMODULE)param_1[1],s_WSAAsyncGetServByName_664efc94);
    *(FARPROC *)((int)param_1 + 0xa1) = pFVar2;
    pFVar2 = GetProcAddress((HMODULE)param_1[1],s_WSAAsyncGetServByPort_664efc7c);
    *(FARPROC *)((int)param_1 + 0xa5) = pFVar2;
    pFVar2 = GetProcAddress((HMODULE)param_1[1],s_WSAAsyncGetProtoByName_664efc64);
    *(FARPROC *)((int)param_1 + 0xa9) = pFVar2;
    pFVar2 = GetProcAddress((HMODULE)param_1[1],s_WSAAsyncGetProtoByNumber_664efc48);
    *(FARPROC *)((int)param_1 + 0xad) = pFVar2;
    pFVar2 = GetProcAddress((HMODULE)param_1[1],s_WSAAsyncGetHostByName_664efc30);
    *(FARPROC *)((int)param_1 + 0xb1) = pFVar2;
    pFVar2 = GetProcAddress((HMODULE)param_1[1],s_WSAAsyncGetHostByAddr_664efc18);
    *(FARPROC *)((int)param_1 + 0xb5) = pFVar2;
    pFVar2 = GetProcAddress((HMODULE)param_1[1],s_WSACancelAsyncRequest_664efc00);
    *(FARPROC *)((int)param_1 + 0xb9) = pFVar2;
    pFVar2 = GetProcAddress((HMODULE)param_1[1],s_WSAAsyncSelect_664efbf0);
    *(FARPROC *)((int)param_1 + 0xbd) = pFVar2;
    pFVar2 = GetProcAddress((HMODULE)param_1[1],s___WSAFDIsSet_664efbe0);
    *(FARPROC *)((int)param_1 + 0xc1) = pFVar2;
    FUN_664ca4c0(param_1);
    return *param_1;
  }
  param_1[1] = 0;
  *(undefined4 *)((int)param_1 + 9) = 0;
  *(undefined4 *)((int)param_1 + 0xd) = 0;
  *(undefined4 *)((int)param_1 + 0x11) = 0;
  *(undefined4 *)((int)param_1 + 0x15) = 0;
  *(undefined4 *)((int)param_1 + 0x19) = 0;
  *(undefined4 *)((int)param_1 + 0x1d) = 0;
  *(undefined4 *)((int)param_1 + 0x21) = 0;
  *(undefined4 *)((int)param_1 + 0x25) = 0;
  *(undefined4 *)((int)param_1 + 0x29) = 0;
  *(undefined4 *)((int)param_1 + 0x2d) = 0;
  *(undefined4 *)((int)param_1 + 0x31) = 0;
  *(undefined4 *)((int)param_1 + 0x35) = 0;
  *(undefined4 *)((int)param_1 + 0x39) = 0;
  *(undefined4 *)((int)param_1 + 0x3d) = 0;
  *(undefined4 *)((int)param_1 + 0x41) = 0;
  *(undefined4 *)((int)param_1 + 0x45) = 0;
  *(undefined4 *)((int)param_1 + 0x49) = 0;
  *(undefined4 *)((int)param_1 + 0x4d) = 0;
  *(undefined4 *)((int)param_1 + 0x51) = 0;
  *(undefined4 *)((int)param_1 + 0x55) = 0;
  *(undefined4 *)((int)param_1 + 0x59) = 0;
  *(undefined4 *)((int)param_1 + 0x5d) = 0;
  *(undefined4 *)((int)param_1 + 0x61) = 0;
  *(undefined4 *)((int)param_1 + 0x65) = 0;
  *(undefined4 *)((int)param_1 + 0x69) = 0;
  *(undefined4 *)((int)param_1 + 0x6d) = 0;
  *(undefined4 *)((int)param_1 + 0x71) = 0;
  *(undefined4 *)((int)param_1 + 0x75) = 0;
  *(undefined4 *)((int)param_1 + 0x79) = 0;
  *(undefined4 *)((int)param_1 + 0x7d) = 0;
  *(undefined4 *)((int)param_1 + 0x81) = 0;
  *(undefined4 *)((int)param_1 + 0x85) = 0;
  *(undefined4 *)((int)param_1 + 0x89) = 0;
  *(undefined4 *)((int)param_1 + 0x8d) = 0;
  *(undefined4 *)((int)param_1 + 0x91) = 0;
  *(undefined4 *)((int)param_1 + 0x95) = 0;
  *(undefined4 *)((int)param_1 + 0x99) = 0;
  *(undefined4 *)((int)param_1 + 0x9d) = 0;
  *(undefined4 *)((int)param_1 + 0xa1) = 0;
  *(undefined4 *)((int)param_1 + 0xa5) = 0;
  *(undefined4 *)((int)param_1 + 0xa9) = 0;
  *(undefined4 *)((int)param_1 + 0xad) = 0;
  *(undefined4 *)((int)param_1 + 0xb1) = 0;
  *(undefined4 *)((int)param_1 + 0xb5) = 0;
  *(undefined4 *)((int)param_1 + 0xb9) = 0;
  *(undefined4 *)((int)param_1 + 0xbd) = 0;
  *(undefined4 *)((int)param_1 + 0xc1) = 0;
  *param_1 = 0;
  return 0;
}


