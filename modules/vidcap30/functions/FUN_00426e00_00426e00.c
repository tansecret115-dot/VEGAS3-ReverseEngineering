/* Module: vidcap30.exe
   Function: FUN_00426e00
   Address: 00426e00
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00426e00(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int unaff_ESI;
  int unaff_retaddr;
  
  piVar2 = param_1;
  iVar3 = 0;
  if ((*param_1 == 8) && ((param_1[0x53] & 0x40U) != 0)) {
    param_1 = (int *)0x0;
    iVar3 = (**(code **)(*(int *)piVar2[0xf3] + 0x40))((int *)piVar2[0xf3],&param_1);
    if (-1 < iVar3) {
      if (((unaff_ESI != 0x10c9) && (unaff_ESI != 0x10cc)) && (unaff_ESI != 0x10cd)) {
        if (((piVar2[0x52] & 0x8000000U) != 0) &&
           (piVar1 = (int *)piVar2[0x213], piVar1 != (int *)0x0)) {
          (**(code **)(*piVar1 + 0x28))(piVar1,1);
        }
        piVar2 = (int *)piVar2[0xf3];
        if (unaff_retaddr == 0) {
          iVar3 = (**(code **)(*piVar2 + 0x3c))(piVar2,0x13a7);
          return iVar3;
        }
        iVar3 = (**(code **)(*piVar2 + 0x3c))(piVar2,0x13a8);
        return iVar3;
      }
      if (unaff_retaddr == 0) {
        iVar3 = (**(code **)(*(int *)piVar2[0xf3] + 0x3c))((int *)piVar2[0xf3],0x10cd);
        return iVar3;
      }
      iVar3 = 1;
    }
  }
  return iVar3;
}


