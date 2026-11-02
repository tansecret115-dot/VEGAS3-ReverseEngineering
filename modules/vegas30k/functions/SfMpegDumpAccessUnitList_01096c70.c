/* Module: vegas30k.dll
   Function: SfMpegDumpAccessUnitList
   Address: 01096c70
   Source: Ghidra pseudocode (Stage 10 batch) */


/* void __stdcall SfMpegDumpAccessUnitList(struct tSFLIST *,char *,int) */

void SfMpegDumpAccessUnitList(tSFLIST *param_1,char *param_2,int param_3)

{
  int iVar1;
  HANDLE hObject;
  undefined4 uVar2;
  int iVar3;
  LPCVOID lpBuffer;
  int iVar4;
  char *pcVar5;
  
                    /* 0x96c70  428  ?SfMpegDumpAccessUnitList@@YGXPAUtSFLIST@@PADH@Z */
  pcVar5 = param_2;
  hObject = CreateFileA(param_2,0xc0000000,1,(LPSECURITY_ATTRIBUTES)0x0,4,0x80,(HANDLE)0x0);
  iVar1 = param_3;
  if (hObject == (HANDLE)0xffffffff) {
    uVar2 = _SfGetString2_8(DAT_0120e5c8,0x1077);
    SfMsgBox(0,0,uVar2,pcVar5);
    return;
  }
  iVar4 = 0;
  while( true ) {
    if (param_1 == (tSFLIST *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)param_1;
    }
    if (iVar3 <= iVar4) break;
    if (param_1 == (tSFLIST *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)param_1;
    }
    if ((iVar4 < 0) || (iVar3 + -1 < iVar4)) {
      lpBuffer = (LPCVOID)0x0;
    }
    else {
      lpBuffer = (LPCVOID)(*(int *)(param_1 + 4) * iVar4 + *(int *)(param_1 + 8));
    }
    WriteFile(hObject,lpBuffer,(-(uint)(iVar1 != 0) & 0xc) + 0xc,(LPDWORD)&param_2,(LPOVERLAPPED)0x0
             );
    iVar4 = iVar4 + 1;
  }
  CloseHandle(hObject);
  return;
}


