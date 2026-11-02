/* Module: mp3plug.dll
   Function: FUN_5f69c5f0
   Address: 5f69c5f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_5f69c5f0(void *this,LPCSTR param_1,undefined4 *param_2,int *param_3,LPSTR param_4,int param_5,
            LPSTR param_6,int param_7)

{
  int iVar1;
  void *this_00;
  int iVar2;
  int iVar3;
  CHAR local_100 [256];
  
  iVar1 = FUN_5f69be70(this,7);
  iVar3 = 0;
  if (0 < iVar1) {
    do {
      this_00 = (void *)FUN_5f69bf30(this,7,iVar3);
      if (this_00 != (void *)0x0) {
        FUN_5f69b460(this_00,local_100,0x100,param_2,param_3);
        iVar2 = lstrcmpiA(local_100,param_1);
        if (iVar2 == 0) {
          FUN_5f69b4c0(this_00,param_4,param_5);
          FUN_5f69b4f0(this_00,param_6,param_7);
          return 0;
        }
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  return 0x8004e00a;
}


