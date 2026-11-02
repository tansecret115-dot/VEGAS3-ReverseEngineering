/* Module: tokr3260.dll
   Function: FUN_68059d90
   Address: 68059d90
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_68059d90(int *param_1,int *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  iVar2 = 0;
  piVar3 = param_2;
  piVar4 = param_1;
  do {
    uVar1 = FUN_680590f0(*piVar4,(int *)0x200,piVar3,
                         (int *)(((int)param_3 - (int)param_2) + (int)piVar3));
    if (uVar1 == 0xfff0bdc1) {
      return -999999;
    }
    iVar2 = iVar2 + 1;
    piVar3 = piVar3 + 0x10;
    piVar4 = piVar4 + 1;
  } while (iVar2 < 4);
  iVar2 = FUN_68059630(param_1,4,0x200,param_2,param_3);
  return (-(uint)(iVar2 != -999999) & 999999) - 999999;
}


