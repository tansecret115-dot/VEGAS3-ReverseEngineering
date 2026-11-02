/* Module: rmme3260.dll
   Function: FUN_6625e490
   Address: 6625e490
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_6625e490(int *param_1)

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
  pHVar1 = LoadLibraryA(s_WSOCK32_DLL_6627c830);
  param_1[1] = (int)pHVar1;
  if ((HMODULE)0x20 < pHVar1) {
    pFVar2 = GetProcAddress(pHVar1,s_accept_6627c828);
    *(FARPROC *)((int)param_1 + 9) = pFVar2;
    pFVar2 = GetProcAddress((HMODULE)param_1[1],&DAT_6627c820);
    *(FARPROC *)((int)param_1 + 0xd) = pFVar2;
    pFVar2 = GetProcAddress((HMODULE)param_1[1],s_closesocket_6627c814);
    *(FARPROC *)((int)param_1 + 0x11) = pFVar2;
    pFVar2 = GetProcAddress((HMODULE)param_1[1],s_connect_6627c80c);
    *(FARPROC *)((int)param_1 + 0x15) = pFVar2;
    pFVar2 = GetProcAddress((HMODULE)param_1[1],s_ioctlsocket_6627c800);
    *(FARPROC *)((int)param_1 + 0x19) = pFVar2;
    pFVar2 = GetProcAddress((HMODULE)param_1[1],s_getpeername_6627c7f4);
    *(FARPROC *)((int)param_1 + 0x1d) = pFVar2;
    pFVar2 = GetProcAddress((HMODULE)param_1[1],s_getsockname_6627c7e8);
    *(FARPROC *)((int)param_1 + 0x21) = pFVar2;
    pFVar2 = GetProcAddress((HMODULE)param_1[1],s_getsockopt_6627c7dc);
    *(FARPROC *)((int)param_1 + 0x25) = pFVar2;
    pFVar2 = GetProcAddress((HMODULE)param_1[1],s_htonl_6627c7d4);
    *(FARPROC *)((int)param_1 + 0x29) = pFVar2;
    pFVar2 = GetProcAddress((HMODULE)param_1[1],s_htons_6627c7cc);
    *(FARPROC *)((int)param_1 + 0x2d) = pFVar2;
    pFVar2 = GetProcAddress((HMODULE)param_1[1],s_inet_addr_6627c7c0);
    *(FARPROC *)((int)param_1 + 0x31) = pFVar2;
    pFVar2 = GetProcAddress((HMODULE)param_1[1],s_inet_ntoa_6627c7b4);
    *(FARPROC *)((int)param_1 + 0x35) = pFVar2;
    pFVar2 = GetProcAddress((HMODULE)param_1[1],s_listen_6627c7ac);
    *(FARPROC *)((int)param_1 + 0x39) = pFVar2;
    pFVar2 = GetProcAddress((HMODULE)param_1[1],s_ntohl_6627c7a4);
    *(FARPROC *)((int)param_1 + 0x3d) = pFVar2;
    pFVar2 = GetProcAddress((HMODULE)param_1[1],s_ntohs_6627c79c);
    *(FARPROC *)((int)param_1 + 0x41) = pFVar2;
    pFVar2 = GetProcAddress((HMODULE)param_1[1],&DAT_6627c794);
    *(FARPROC *)((int)param_1 + 0x45) = pFVar2;
    pFVar2 = GetProcAddress((HMODULE)param_1[1],s_recvfrom_6627c788);
    *(FARPROC *)((int)param_1 + 0x49) = pFVar2;
    pFVar2 = GetProcAddress((HMODULE)param_1[1],s_select_6627c780);
    *(FARPROC *)((int)param_1 + 0x4d) = pFVar2;
    pFVar2 = GetProcAddress((HMODULE)param_1[1],&DAT_6627c778);
    *(FARPROC *)((int)param_1 + 0x51) = pFVar2;
    pFVar2 = GetProcAddress((HMODULE)param_1[1],s_sendto_6627c770);
    *(FARPROC *)((int)param_1 + 0x55) = pFVar2;
    pFVar2 = GetProcAddress((HMODULE)param_1[1],s_setsockopt_6627c764);
    *(FARPROC *)((int)param_1 + 0x59) = pFVar2;
    pFVar2 = GetProcAddress((HMODULE)param_1[1],s_shutdown_6627c758);
    *(FARPROC *)((int)param_1 + 0x5d) = pFVar2;
    pFVar2 = GetProcAddress((HMODULE)param_1[1],s_socket_6627c750);
    *(FARPROC *)((int)param_1 + 0x61) = pFVar2;
    pFVar2 = GetProcAddress((HMODULE)param_1[1],s_gethostbyaddr_6627c740);
    *(FARPROC *)((int)param_1 + 0x65) = pFVar2;
    pFVar2 = GetProcAddress((HMODULE)param_1[1],s_gethostbyname_6627c730);
    *(FARPROC *)((int)param_1 + 0x69) = pFVar2;
    pFVar2 = GetProcAddress((HMODULE)param_1[1],s_gethostname_6627c724);
    *(FARPROC *)((int)param_1 + 0x6d) = pFVar2;
    pFVar2 = GetProcAddress((HMODULE)param_1[1],s_getservbyport_6627c714);
    *(FARPROC *)((int)param_1 + 0x71) = pFVar2;
    pFVar2 = GetProcAddress((HMODULE)param_1[1],s_getservbyname_6627c704);
    *(FARPROC *)((int)param_1 + 0x75) = pFVar2;
    pFVar2 = GetProcAddress((HMODULE)param_1[1],s_getprotobynumber_6627c6f0);
    *(FARPROC *)((int)param_1 + 0x79) = pFVar2;
    pFVar2 = GetProcAddress((HMODULE)param_1[1],s_getprotobyname_6627c6e0);
    *(FARPROC *)((int)param_1 + 0x7d) = pFVar2;
    pFVar2 = GetProcAddress((HMODULE)param_1[1],s_WSAStartup_6627c6d4);
    *(FARPROC *)((int)param_1 + 0x81) = pFVar2;
    pFVar2 = GetProcAddress((HMODULE)param_1[1],s_WSACleanup_6627c6c8);
    *(FARPROC *)((int)param_1 + 0x85) = pFVar2;
    pFVar2 = GetProcAddress((HMODULE)param_1[1],s_WSASetLastError_6627c6b8);
    *(FARPROC *)((int)param_1 + 0x89) = pFVar2;
    pFVar2 = GetProcAddress((HMODULE)param_1[1],s_WSAGetLastError_6627c6a8);
    *(FARPROC *)((int)param_1 + 0x8d) = pFVar2;
    pFVar2 = GetProcAddress((HMODULE)param_1[1],s_WSAIsBlocking_6627c698);
    *(FARPROC *)((int)param_1 + 0x91) = pFVar2;
    pFVar2 = GetProcAddress((HMODULE)param_1[1],s_WSAUnhookBlockingHook_6627c680);
    *(FARPROC *)((int)param_1 + 0x95) = pFVar2;
    pFVar2 = GetProcAddress((HMODULE)param_1[1],s_WSASetBlockingHook_6627c66c);
    *(FARPROC *)((int)param_1 + 0x99) = pFVar2;
    pFVar2 = GetProcAddress((HMODULE)param_1[1],s_WSACancelBlockingCall_6627c654);
    *(FARPROC *)((int)param_1 + 0x9d) = pFVar2;
    pFVar2 = GetProcAddress((HMODULE)param_1[1],s_WSAAsyncGetServByName_6627c63c);
    *(FARPROC *)((int)param_1 + 0xa1) = pFVar2;
    pFVar2 = GetProcAddress((HMODULE)param_1[1],s_WSAAsyncGetServByPort_6627c624);
    *(FARPROC *)((int)param_1 + 0xa5) = pFVar2;
    pFVar2 = GetProcAddress((HMODULE)param_1[1],s_WSAAsyncGetProtoByName_6627c60c);
    *(FARPROC *)((int)param_1 + 0xa9) = pFVar2;
    pFVar2 = GetProcAddress((HMODULE)param_1[1],s_WSAAsyncGetProtoByNumber_6627c5f0);
    *(FARPROC *)((int)param_1 + 0xad) = pFVar2;
    pFVar2 = GetProcAddress((HMODULE)param_1[1],s_WSAAsyncGetHostByName_6627c5d8);
    *(FARPROC *)((int)param_1 + 0xb1) = pFVar2;
    pFVar2 = GetProcAddress((HMODULE)param_1[1],s_WSAAsyncGetHostByAddr_6627c5c0);
    *(FARPROC *)((int)param_1 + 0xb5) = pFVar2;
    pFVar2 = GetProcAddress((HMODULE)param_1[1],s_WSACancelAsyncRequest_6627c5a8);
    *(FARPROC *)((int)param_1 + 0xb9) = pFVar2;
    pFVar2 = GetProcAddress((HMODULE)param_1[1],s_WSAAsyncSelect_6627c598);
    *(FARPROC *)((int)param_1 + 0xbd) = pFVar2;
    pFVar2 = GetProcAddress((HMODULE)param_1[1],s___WSAFDIsSet_6627c588);
    *(FARPROC *)((int)param_1 + 0xc1) = pFVar2;
    FUN_6625e8a0(param_1);
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


