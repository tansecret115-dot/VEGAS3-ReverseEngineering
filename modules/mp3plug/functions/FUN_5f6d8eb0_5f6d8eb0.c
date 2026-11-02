/* Module: mp3plug.dll
   Function: FUN_5f6d8eb0
   Address: 5f6d8eb0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_5f6d8eb0(char *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  char *pcVar4;
  
  if ((param_4 != 0) && (puVar3 = FUN_5f6d9720(0x14,1), puVar3 != (undefined4 *)0x0)) {
    if (param_1 != (char *)0x0) {
      strrchr(param_1,0x2f);
    }
    pcVar4 = FUN_5f6d8e40();
    *puVar3 = pcVar4;
    puVar3[1] = param_2;
    pcVar4 = FUN_5f6d8e40();
    puVar3[2] = pcVar4;
    iVar1 = *(int *)(param_4 + 0x10);
    iVar2 = param_4;
    while (iVar1 != 0) {
      iVar2 = *(int *)(iVar2 + 0x10);
      iVar1 = *(int *)(iVar2 + 0x10);
    }
    *(undefined4 **)(iVar2 + 0x10) = puVar3;
  }
  return param_4;
}


