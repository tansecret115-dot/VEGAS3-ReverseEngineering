/* Module: cook3260.dll
   Function: FUN_633a3f70
   Address: 633a3f70
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_633a3f70(void *this,int *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int local_10;
  int local_8;
  
  local_8 = 0;
  if (0 < *(int *)((int)this + 0x20)) {
    piVar2 = (int *)((int)this + 0x2c);
    do {
      iVar4 = piVar2[0x66];
      FUN_633a38b0(this,*piVar2,iVar4);
      param_1 = (int *)((int)param_1 - iVar4);
      local_8 = local_8 + 1;
      piVar2 = piVar2 + 1;
    } while (local_8 < *(int *)((int)this + 0x20));
  }
  FUN_633a38b0(this,*(int *)((int)this + 0x35c),*(int *)((int)this + 0x24));
  iVar4 = (int)param_1 - *(int *)((int)this + 0x24);
  local_8 = 0;
  if (0 < *(int *)((int)this + 0x20)) {
    param_1 = (int *)((int)this + 0x4320);
    piVar2 = (int *)((int)this + 0x2340);
    do {
      local_10 = 0;
      piVar3 = piVar2;
      if (0 < *param_1) {
        do {
          iVar1 = *piVar3;
          if (iVar4 < iVar1) {
            FUN_633a38b0(this,piVar3[-0x7f8] >> ((char)iVar1 - (char)iVar4 & 0x1fU),iVar4);
            iVar4 = 0;
          }
          else {
            FUN_633a38b0(this,piVar3[-0x7f8],iVar1);
            iVar4 = iVar4 - iVar1;
          }
          if (iVar4 == 0) {
            return;
          }
          local_10 = local_10 + 1;
          piVar3 = piVar3 + 1;
        } while (local_10 < *param_1);
      }
      if (iVar4 == 0) {
        return;
      }
      local_8 = local_8 + 1;
      piVar2 = piVar2 + 0x14;
      param_1 = param_1 + 1;
    } while (local_8 < *(int *)((int)this + 0x20));
  }
  return;
}


