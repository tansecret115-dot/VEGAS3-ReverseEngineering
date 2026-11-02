/* Module: sctplug.dll
   Function: FUN_00428320
   Address: 00428320
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_00428320(ushort *param_1,undefined4 param_2,ushort *param_3,undefined4 param_4,int param_5,
            undefined4 param_6)

{
  char cVar1;
  char cVar2;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  code *pcVar3;
  
  if (param_5 != 0) {
    cVar1 = FUN_00419300(param_1);
    cVar2 = FUN_00419300(param_3);
    pcVar3 = (code *)FUN_00427930(CONCAT31(extraout_var,cVar1),CONCAT31(extraout_var_00,cVar2));
    if (pcVar3 == (code *)0x0) {
      return 0x80004001;
    }
    (*pcVar3)(param_2,param_4,(uint)param_3[1] * param_5,param_6);
  }
  return 0;
}


