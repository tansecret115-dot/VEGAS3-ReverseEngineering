/* Module: mp3plug.dll
   Function: FUN_5f693ea0
   Address: 5f693ea0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x5f69408c) */
/* WARNING: Removing unreachable block (ram,0x5f694112) */
/* WARNING: Removing unreachable block (ram,0x5f6940a2) */
/* WARNING: Removing unreachable block (ram,0x5f6940c2) */
/* WARNING: Removing unreachable block (ram,0x5f6940cd) */
/* WARNING: Removing unreachable block (ram,0x5f6940d3) */
/* WARNING: Removing unreachable block (ram,0x5f6940f6) */

int FUN_5f693ea0(int param_1)

{
  int iVar1;
  HGLOBAL pvVar2;
  LPVOID pvVar3;
  void *this;
  int iVar4;
  CHAR aCStack_318 [8];
  int *local_310;
  undefined1 uStack_215;
  WCHAR aWStack_214 [6];
  undefined1 local_208 [520];
  
  if (*(int *)(param_1 + 0x30) != 0) {
    return 0;
  }
  local_310 = (int *)(param_1 + 0x30);
  iVar1 = (**(code **)(**(int **)(param_1 + 0x24) + 0x34))
                    (*(int **)(param_1 + 0x24),local_208,0x104);
  if (-1 < iVar1) {
    if ((&stack0x00000000 == (undefined1 *)0x214) || (aWStack_214[0] != L'\0')) {
      WideCharToMultiByte(0,0,aWStack_214,-1,aCStack_318,0x104,(LPCSTR)0x0,(LPBOOL)0x0);
    }
    else if (&stack0x00000000 != (undefined1 *)0x318) {
      aCStack_318[0] = '\0';
    }
    uStack_215 = 0;
    *(undefined4 *)(param_1 + 0x6c) = 0;
    *(undefined4 *)(param_1 + 0x50) = 0;
    FUN_5f6b67c0((int *)(param_1 + 0x30),4,-1,-1,0x80000002);
    pvVar2 = GlobalAlloc(0x40,0x1c);
    pvVar3 = GlobalLock(pvVar2);
    if ((pvVar3 == (LPVOID)0x0) || (this = (void *)FUN_5f69b6c0((int)pvVar3), this == (void *)0x0))
    {
      return -0x7ff8fff2;
    }
    FUN_5f69b6d0((int)this);
    iVar1 = FUN_5f69b760(this,aCStack_318);
    if ((-1 < iVar1) && (iVar4 = FUN_5f69c6b0(this), iVar4 != 0)) {
      iVar4 = FUN_5f69c5f0(this,"SfAcidChunk",(undefined4 *)0x0,(int *)&stack0xfffffcdc,(LPSTR)0x0,0
                           ,(LPSTR)0x0,0);
      if (-1 < iVar4) {
        iVar1 = FUN_5f69c5f0(this,"SfAcidChunk",(undefined4 *)(param_1 + 0x54),
                             (int *)&stack0xfffffcdc,(LPSTR)0x0,0,(LPSTR)0x0,0);
        *(undefined4 *)(param_1 + 0x6c) = 1;
      }
      iVar4 = FUN_5f69c5f0(this,"SfAcidStretchChunk",(undefined4 *)0x0,(int *)&stack0xfffffcdc,
                           (LPSTR)0x0,0,(LPSTR)0x0,0);
      if (-1 < iVar4) {
        FUN_5f69c5f0(this,"SfAcidChunk",(undefined4 *)(param_1 + 0x34),(int *)&stack0xfffffcdc,
                     (LPSTR)0x0,0,(LPSTR)0x0,0);
        *(undefined4 *)(param_1 + 0x50) = 1;
        iVar1 = FUN_5f69c5f0(this,"SfAcidStretchList",(undefined4 *)0x0,(int *)&stack0xfffffcdc,
                             (LPSTR)0x0,0,(LPSTR)0x0,0);
      }
    }
    FUN_5f69b700((int)this);
    pvVar2 = GlobalHandle(this);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(this);
    GlobalFree(pvVar2);
  }
  return iVar1;
}


