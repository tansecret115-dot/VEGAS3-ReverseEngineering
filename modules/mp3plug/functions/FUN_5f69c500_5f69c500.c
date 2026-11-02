/* Module: mp3plug.dll
   Function: FUN_5f69c500
   Address: 5f69c500
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_5f69c500(void *this,uchar *param_1,uchar *param_2)

{
  int iVar1;
  void *this_00;
  int iVar2;
  HGLOBAL hMem;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *local_104;
  CHAR local_100 [256];
  
  iVar1 = FUN_5f69be70(this,0x3d);
  iVar4 = 0;
  if (0 < iVar1) {
    do {
      this_00 = (void *)FUN_5f69bf30(this,0x3d,iVar4);
      if (this_00 != (void *)0x0) {
        FUN_5f69b030(this_00,local_100,0x100,(LPSTR)0x0,0);
        iVar2 = lstrcmpiA(local_100,(LPCSTR)param_1);
        if (iVar2 == 0) {
          FUN_5f69b080(this_00,param_2);
          return 0;
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar1);
  }
  hMem = GlobalAlloc(0x40,0x38);
  puVar3 = GlobalLock(hMem);
  if (puVar3 == (undefined4 *)0x0) {
    local_104 = (undefined4 *)0x0;
  }
  else {
    local_104 = FUN_5f69aea0(puVar3);
  }
  FUN_5f69a6d0(local_104,3,0x3d);
  FUN_5f69b080(local_104,param_2);
  FUN_5f69b0e0(local_104,param_1);
  iVar1 = FUN_5f6b5190(*(int **)((int)this + 0x18),-1,(int *)&local_104,1);
  return iVar1;
}


