/* Module: mcplugrw.dll
   Function: FUN_004465d0
   Address: 004465d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int * FUN_004465d0(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  undefined4 uVar4;
  char *pcVar5;
  
  piVar1 = FUN_00475a10(1);
  if (piVar1 == (int *)0x0) {
    return (int *)0x0;
  }
  iVar2 = setjmp3(piVar1,0);
  if (iVar2 != 0) {
    FUN_00475ac0((int)piVar1,(void *)piVar1[0x29]);
    FUN_00475a60(piVar1);
    return (int *)0x0;
  }
  FUN_00475d10((int)piVar1,param_2,param_3,param_4);
  if (((param_1 == (char *)0x0) || (*param_1 != s_1_0_2_004a6df8[0])) ||
     ((*param_1 == '0' && (param_1[2] < '9')))) {
    FUN_00475b50(piVar1,"Incompatible libpng version in application and library");
  }
  piVar1[0x2a] = 0x2000;
  pvVar3 = FUN_00475a80(piVar1,0x2000);
  piVar1[0x29] = (int)pvVar3;
  piVar1[0x23] = (int)FUN_0044c4b0;
  piVar1[0x24] = (int)FUN_0044c510;
  piVar1[0x25] = (int)piVar1;
  uVar4 = FUN_004317e0((int)(piVar1 + 0x1b),"1.1.3",0x38);
  switch(uVar4) {
  case 0:
    goto switchD_004466a3_caseD_0;
  case 0xfffffffa:
    pcVar5 = "zlib version error";
    break;
  default:
    pcVar5 = "Unknown zlib error";
    break;
  case 0xfffffffc:
  case 0xfffffffe:
    pcVar5 = "zlib memory error";
  }
  FUN_00475b50(piVar1,pcVar5);
switchD_004466a3_caseD_0:
  piVar1[0x1e] = piVar1[0x29];
  piVar1[0x1f] = piVar1[0x2a];
  FUN_0044c760((int)piVar1,0,0);
  return piVar1;
}


