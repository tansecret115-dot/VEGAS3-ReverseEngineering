/* Module: vidcap30.exe
   Function: FUN_00537680
   Address: 00537680
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00537680(LPCSTR param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = param_2;
  for (iVar1 = 0xd8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(CHAR *)(param_2 + 0x15) = '\0';
  *(undefined1 *)(param_2 + 0x56) = 0;
  *(undefined1 *)(param_2 + 0x97) = 0;
  iVar1 = FUN_00537440(param_2);
  if (iVar1 == 0) {
    while( true ) {
      iVar1 = lstrcmpiA((LPCSTR)(param_2 + 0x15),param_1);
      if (iVar1 == 0) break;
      puVar2 = param_2;
      for (iVar1 = 0xd8; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
      }
      iVar1 = FUN_00537500(param_2);
      if (iVar1 != 0) {
        return iVar1;
      }
    }
    iVar1 = 0;
  }
  return iVar1;
}


