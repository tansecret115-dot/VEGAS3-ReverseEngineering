/* Module: vegas30k.dll
   Function: FUN_01159840
   Address: 01159840
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01159840(int param_1,undefined2 *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined2 *puVar3;
  
  iVar2 = param_3;
  iVar1 = param_1;
  if (param_3 <= (int)(uint)*(ushort *)(param_1 + 0x110)) {
    FUN_01158d00(param_1,&DAT_01206ff4,param_3 * 2);
    puVar3 = param_2;
    if (0 < iVar2) {
      do {
        FUN_01158cb0(&param_1,*puVar3);
        FUN_01158d50(iVar1,&param_1,2);
        iVar2 = iVar2 + -1;
        puVar3 = puVar3 + 1;
      } while (iVar2 != 0);
    }
    FUN_01158d80(iVar1);
    return;
  }
  FUN_01155fb0(param_1,"Invalid number of histogram entries specified");
  return;
}


