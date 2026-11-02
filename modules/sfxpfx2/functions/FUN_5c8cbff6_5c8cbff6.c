/* Module: sfxpfx2.dll
   Function: FUN_5c8cbff6
   Address: 5c8cbff6
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5c8cbff6(int *param_1,char *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  bool bVar4;
  
  if (param_3 == (undefined4 *)0x0) {
    uVar1 = 0x80004003;
  }
  else {
    iVar2 = 0x10;
    bVar4 = true;
    pcVar3 = "";
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      bVar4 = *param_2 == *pcVar3;
      param_2 = param_2 + 1;
      pcVar3 = pcVar3 + 1;
    } while (bVar4);
    if (bVar4) {
      FUN_5c8cc08c(param_1,param_3);
      uVar1 = 0;
    }
    else {
      *param_3 = 0;
      uVar1 = 0x80004002;
    }
  }
  return uVar1;
}


