/* Module: vidcap30.exe
   Function: FUN_00406ac0
   Address: 00406ac0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00406ac0(int param_1,int param_2,int param_3,uint param_4)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  undefined1 local_100 [256];
  
  puVar2 = &DAT_00586c70;
  if ((param_1 == 0) || (*(int *)(param_1 + 0x90) == 0)) {
    if (((param_2 != 0) || (param_4 != 0xffff)) && (((param_4 & 0x2012) == 0 && (param_3 != 0)))) {
      puVar2 = local_100;
      uVar1 = _SfGetString_8(DAT_005ba2a0,param_3);
      SfPrintF(local_100,uVar1);
    }
    FUN_00410ef0(puVar2);
  }
  return;
}


