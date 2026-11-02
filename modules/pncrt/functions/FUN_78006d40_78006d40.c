/* Module: pncrt.dll
   Function: FUN_78006d40
   Address: 78006d40
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __thiscall FUN_78006d40(void *this,DName *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  if (*(int *)this != 9) {
    iVar1 = DName::isEmpty(param_1);
    if (iVar1 == 0) {
      puVar2 = (undefined4 *)FUN_78006050(&DAT_78041a90,8,0);
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        uVar3 = ((*(int *)(param_1 + 4) << 0x1c) >> 0x1c ^ puVar2[1]) & 0xfU ^ puVar2[1];
        puVar2[1] = uVar3;
        uVar3 = (*(uint *)(param_1 + 4) ^ uVar3) & 0x10 ^ uVar3;
        puVar2[1] = uVar3;
        uVar3 = (*(uint *)(param_1 + 4) ^ uVar3) & 0x20 ^ uVar3;
        puVar2[1] = uVar3;
        puVar2[1] = (*(uint *)(param_1 + 4) ^ uVar3) & 0x40 ^ uVar3;
        *puVar2 = *(undefined4 *)param_1;
      }
      if (puVar2 != (undefined4 *)0x0) {
        iVar1 = *(int *)this;
        *(int *)this = iVar1 + 1;
        *(undefined4 **)((int)this + (iVar1 + 1) * 4 + 4) = puVar2;
      }
    }
  }
  return this;
}


