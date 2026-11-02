/* Module: vegas30k.dll
   Function: FUN_011bbed0
   Address: 011bbed0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_011bbed0(int param_1,int *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  undefined4 unaff_ESI;
  int unaff_EDI;
  undefined4 unaff_retaddr;
  undefined4 uVar1;
  
  uVar1 = 0;
  (**(code **)(*param_2 + 0x2c))(param_2,&param_2,0,0);
  if ((0x22 < unaff_EDI) && (unaff_EDI < 0x2d)) {
    uVar1 = (**(code **)(param_1 + 0x7e4))
                      (param_1,unaff_EDI,*(undefined4 *)(param_1 + 0x7e8),unaff_ESI,uVar1,
                       unaff_retaddr,param_2,param_3,param_4,param_5);
    return uVar1;
  }
  return 0x80004001;
}


