/* Module: mp3plug.dll
   Function: FUN_5f69c300
   Address: 5f69c300
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_5f69c300(void *this,uchar *param_1,uchar *param_2)

{
  int iVar1;
  void *this_00;
  int iVar2;
  HGLOBAL hMem;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *local_204;
  CHAR local_200 [256];
  CHAR local_100 [256];
  
  iVar1 = FUN_5f69be70(this,2);
  iVar4 = 0;
  if (0 < iVar1) {
    do {
      this_00 = (void *)FUN_5f69bf30(this,2,iVar4);
      if (this_00 != (void *)0x0) {
        FUN_5f69ad90(this_00,local_200,0x100,local_100,0x100);
        iVar2 = lstrcmpA(local_200,(LPCSTR)param_1);
        if (iVar2 == 0) {
          FUN_5f69add0(this_00,param_2);
          return 0;
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar1);
  }
  hMem = GlobalAlloc(0x40,0x34);
  puVar3 = GlobalLock(hMem);
  if (puVar3 == (undefined4 *)0x0) {
    local_204 = (undefined4 *)0x0;
  }
  else {
    local_204 = FUN_5f69ab80(puVar3);
  }
  FUN_5f69a6d0(local_204,6,2);
  FUN_5f69add0(local_204,param_2);
  FUN_5f69ae40(local_204,param_1);
  iVar1 = FUN_5f6b5190(*(int **)((int)this + 0x18),-1,(int *)&local_204,1);
  return iVar1;
}


