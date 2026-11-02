/* Module: vidcap30.exe
   Function: FUN_0057d910
   Address: 0057d910
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x0057d95c) */
/* WARNING: Removing unreachable block (ram,0x0057d96a) */

int FUN_0057d910(undefined4 param_1,undefined4 param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 unaff_ESI;
  undefined1 *puStack_1c;
  int *piStack_18;
  undefined4 auStack_8 [2];
  
  piVar1 = param_3;
  piStack_18 = param_3;
  puStack_1c = (undefined1 *)0x57d924;
  iVar2 = (**(code **)(*param_3 + 0x14))();
  if (iVar2 < 0) {
    return iVar2;
  }
  puStack_1c = &stack0xfffffff4;
  param_2 = 0;
  iVar2 = 0;
  iVar3 = (**(code **)(*piVar1 + 0xc))(piVar1,1,&param_2);
  if (iVar3 == 0) {
    do {
      iVar3 = FUN_0057d850(unaff_ESI,auStack_8[0]);
      if ((((iVar3 < 0) && (-1 < iVar2)) && (iVar3 != -0x7fffbffb)) &&
         ((iVar3 != -0x7ff8ffa9 && (iVar3 != -0x7ffbfdd6)))) {
        iVar2 = iVar3;
      }
      FUN_0057b1c0(auStack_8[0]);
      if (iVar3 == 0) {
        return 0;
      }
      iVar3 = (**(code **)(*piVar1 + 0xc))(piVar1,1,auStack_8,&puStack_1c);
    } while (iVar3 == 0);
    if (iVar2 != 0) {
      return iVar2;
    }
  }
  return -0x7ffbfdf9;
}


