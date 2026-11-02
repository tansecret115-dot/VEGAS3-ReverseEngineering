/* Module: vidcap30.exe
   Function: FUN_004600e0
   Address: 004600e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004600e0(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  
  SfSetDlgItemText(param_1,0x9c76,&DAT_00586b68,param_2 + 0x30);
  SfSetDlgItemText(param_1,0x466,&DAT_00586b68,param_2 + 0xb0);
  uVar1 = FUN_00443780(*(undefined4 *)(param_2 + 0x2c));
  SfSetDlgItemText(param_1,0x467,&DAT_00589f30,uVar1);
  return;
}


