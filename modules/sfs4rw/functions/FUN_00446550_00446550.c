/* Module: sfs4rw.dll
   Function: FUN_00446550
   Address: 00446550
   Source: Ghidra pseudocode (Stage 10 batch) */


int * FUN_00446550(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  undefined4 uVar4;
  char *pcVar5;
  
  piVar1 = FUN_00475990(1);
  if (piVar1 == (int *)0x0) {
    return (int *)0x0;
  }
  iVar2 = setjmp3(piVar1,0);
  if (iVar2 != 0) {
    FUN_00475a40((int)piVar1,(void *)piVar1[0x29]);
    FUN_004759e0(piVar1);
    return (int *)0x0;
  }
  FUN_00475c90((int)piVar1,param_2,param_3,param_4);
  if (((param_1 == (char *)0x0) || (*param_1 != s_1_0_2_004a6df8[0])) ||
     ((*param_1 == '0' && (param_1[2] < '9')))) {
    FUN_00475ad0(piVar1,"Incompatible libpng version in application and library");
  }
  piVar1[0x2a] = 0x2000;
  pvVar3 = FUN_00475a00(piVar1,0x2000);
  piVar1[0x29] = (int)pvVar3;
  piVar1[0x23] = (int)FUN_0044c430;
  piVar1[0x24] = (int)FUN_0044c490;
  piVar1[0x25] = (int)piVar1;
  uVar4 = FUN_00431760((int)(piVar1 + 0x1b),"1.1.3",0x38);
  switch(uVar4) {
  case 0:
    goto switchD_00446623_caseD_0;
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
  FUN_00475ad0(piVar1,pcVar5);
switchD_00446623_caseD_0:
  piVar1[0x1e] = piVar1[0x29];
  piVar1[0x1f] = piVar1[0x2a];
  FUN_0044c6e0((int)piVar1,0,0);
  return piVar1;
}


