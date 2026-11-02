/* Module: mp3plug.dll
   Function: FUN_5f6869f0
   Address: 5f6869f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f6869f0(LPCSTR param_1,char *param_2)

{
  int iVar1;
  uint uVar2;
  CHAR local_20 [32];
  
  *param_2 = '\f';
  uVar2 = 1000;
  do {
    iVar1 = FUN_5f69dd80(DAT_5f74d2f4,uVar2,local_20,0x1f);
    if (iVar1 != 0) {
      iVar1 = lstrcmpiA(param_1,local_20);
      if (iVar1 == 0) {
        *param_2 = (char)uVar2 + '\x18';
        return 0;
      }
    }
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 0x466);
  return 0;
}


