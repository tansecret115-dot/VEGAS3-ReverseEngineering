/* Module: mpgmux.dll
   Function: FUN_10011b03
   Address: 10011b03
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_10011b03(DWORD param_1)

{
  undefined4 *puVar1;
  DWORD *pDVar2;
  DWORD DVar3;
  size_t sVar4;
  HANDLE hFile;
  int iVar5;
  uint *_Dest;
  undefined1 auStackY_1e3 [7];
  LPCVOID lpBuffer;
  LPOVERLAPPED lpOverlapped;
  uint local_1a8 [65];
  uint local_a4 [40];
  
  iVar5 = 0;
  pDVar2 = &DAT_1001a128;
  do {
    if (param_1 == *pDVar2) break;
    pDVar2 = pDVar2 + 2;
    iVar5 = iVar5 + 1;
  } while ((int)pDVar2 < 0x1001a1b8);
  if (param_1 == (&DAT_1001a128)[iVar5 * 2]) {
    if ((DAT_1001af8c == 1) || ((DAT_1001af8c == 0 && (DAT_1001af90 == 1)))) {
      pDVar2 = &param_1;
      puVar1 = (undefined4 *)(iVar5 * 8 + 0x1001a12c);
      lpOverlapped = (LPOVERLAPPED)0x0;
      sVar4 = _strlen((char *)*puVar1);
      lpBuffer = (LPCVOID)*puVar1;
      hFile = GetStdHandle(0xfffffff4);
      WriteFile(hFile,lpBuffer,sVar4,pDVar2,lpOverlapped);
    }
    else if (param_1 != 0xfc) {
      DVar3 = GetModuleFileNameA((HMODULE)0x0,(LPSTR)local_1a8,0x104);
      if (DVar3 == 0) {
        FUN_10013070(local_1a8,(uint *)"<program name unknown>");
      }
      _Dest = local_1a8;
      sVar4 = _strlen((char *)local_1a8);
      if (0x3c < sVar4 + 1) {
        sVar4 = _strlen((char *)local_1a8);
        _Dest = (uint *)(auStackY_1e3 + sVar4);
        _strncpy((char *)_Dest,"...",3);
      }
      FUN_10013070(local_a4,(uint *)"Runtime Error!\n\nProgram: ");
      FUN_10013080(local_a4,_Dest);
      FUN_10013080(local_a4,(uint *)&DAT_1001561c);
      FUN_10013080(local_a4,*(uint **)(iVar5 * 8 + 0x1001a12c));
      auStackY_1e3._3_4_ = 0x10011c27;
      FUN_1001355d(local_a4,"Microsoft Visual C++ Runtime Library",0x12010);
    }
  }
  return;
}


