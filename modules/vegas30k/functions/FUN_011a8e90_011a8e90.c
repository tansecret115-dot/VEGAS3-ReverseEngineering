/* Module: vegas30k.dll
   Function: FUN_011a8e90
   Address: 011a8e90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_011a8e90(int param_1,int *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7)

{
  undefined4 unaff_ESI;
  undefined4 unaff_retaddr;
  undefined4 uVar1;
  
  uVar1 = 0;
  (**(code **)(*param_2 + 0x30))(param_2,&param_2,0);
  switch((&switchD_011a8eb7::switchdataD_011a8f14)[switchD_011a8eb7::switchdataD_011a8f1c]) {
  default:
    uVar1 = (**(code **)(param_1 + 0x7dc))
                      (param_1,0,*(undefined4 *)(param_1 + 0x7e0),param_3,uVar1,unaff_ESI,
                       *(undefined4 *)(param_1 + 0x490),*(undefined4 *)(param_1 + 0x494),
                       unaff_retaddr,param_2,param_4,param_5,param_6,param_7);
    return uVar1;
  case (undefined *)0x11a8f0c:
    return 0;
  }
}


