/* Module: vidcap30.exe
   Function: FUN_0057e420
   Address: 0057e420
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall
FUN_0057e420(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6)

{
  int iVar1;
  undefined4 *puVar2;
  
  FUN_0057d510(param_2,param_3,param_4,param_5,param_6,0);
  *(undefined4 *)(param_1 + 0x9c) = 0;
  *(undefined1 *)(param_1 + 0xa0) = 0;
  *(undefined1 *)(param_1 + 0xa1) = 0;
  puVar2 = (undefined4 *)(param_1 + 0xa8);
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return param_1;
}


