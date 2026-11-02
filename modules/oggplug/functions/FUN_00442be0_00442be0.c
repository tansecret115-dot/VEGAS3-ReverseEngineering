/* Module: oggplug.dll
   Function: FUN_00442be0
   Address: 00442be0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __cdecl FUN_00442be0(int *param_1,int *param_2)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  piVar3 = param_1;
  param_1 = (int *)0xffffffff;
  iVar6 = piVar3[2];
  uVar5 = iVar6 + 0x2134;
  do {
    iVar6 = iVar6 + -0x2134;
    uVar5 = uVar5 - 0x2134;
    FUN_00442cc0(piVar3,iVar6);
    iVar4 = (int)uVar5 >> 0x1f;
    if (piVar3[3] <= iVar4) {
      if (piVar3[3] < iVar4) goto LAB_00442c39;
      uVar1 = piVar3[2];
      piVar2 = param_1;
      while (param_1 = piVar2, uVar1 < uVar5) {
LAB_00442c39:
        do {
          piVar2 = (int *)FUN_00442990(piVar3,param_2,(iVar6 - piVar3[2]) + 0x2134);
          if (piVar2 == (int *)0xffffff80) {
            return 0xffffff80;
          }
          if ((int)piVar2 < 0) goto LAB_00442c71;
          param_1 = piVar2;
        } while (piVar3[3] < iVar4);
        if (iVar4 < piVar3[3]) break;
        uVar1 = piVar3[2];
      }
    }
LAB_00442c71:
    if (param_1 != (int *)0xffffffff) {
      FUN_00442cc0(piVar3,(int)param_1);
      uVar5 = FUN_00442990(piVar3,param_2,0x2134);
      piVar3 = (int *)0xffffff7f;
      if (-1 < (int)uVar5) {
        piVar3 = param_1;
      }
      return (uint)piVar3;
    }
  } while( true );
}


