/* Module: mp3plug.dll
   Function: FUN_5f69c730
   Address: 5f69c730
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall
FUN_5f69c730(void *this,uchar *param_1,undefined4 *param_2,uint param_3,uchar *param_4,
            uchar *param_5)

{
  int iVar1;
  void *this_00;
  int iVar2;
  HGLOBAL hMem;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *local_104;
  CHAR local_100 [256];
  
  iVar1 = FUN_5f69be70(this,7);
  iVar4 = 0;
  if (0 < iVar1) {
    do {
      this_00 = (void *)FUN_5f69bf30(this,7,iVar4);
      if (this_00 != (void *)0x0) {
        local_104 = (undefined4 *)0x0;
        FUN_5f69b460(this_00,local_100,0x100,(undefined4 *)0x0,(int *)&local_104);
        iVar2 = lstrcmpiA(local_100,(LPCSTR)param_1);
        if (iVar2 == 0) {
          FUN_5f69b520(this_00,param_2,param_3);
          return 0;
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar1);
  }
  hMem = GlobalAlloc(0x40,0x48);
  puVar3 = GlobalLock(hMem);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = FUN_5f69b140(puVar3);
  }
  FUN_5f69a6d0(puVar3,0xb,7);
  FUN_5f69b520(puVar3,param_2,param_3);
  FUN_5f69b5a0(puVar3,param_1);
  FUN_5f69b600(puVar3,param_4);
  FUN_5f69b660(puVar3,param_5);
  local_104 = puVar3;
  iVar1 = FUN_5f6b5190(*(int **)((int)this + 0x18),-1,(int *)&local_104,1);
  return iVar1;
}


