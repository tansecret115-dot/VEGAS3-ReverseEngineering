/* Module: vidcap30.exe
   Function: FUN_0046de60
   Address: 0046de60
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_0046de60(int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint local_10;
  int local_c;
  int local_8;
  int local_4;
  
  iVar3 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xe0));
  if (*(int *)(param_1 + 200) == 0) goto LAB_0046dfb7;
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  local_4 = 0;
  iVar3 = (**(code **)(*param_2 + 0x44))(param_2,&local_10,&local_8);
  if (iVar3 < 0) {
    if (iVar3 != -0x7ffbfdaf) goto LAB_0046ded2;
    if (*(int *)(param_1 + 0xd0) != 0) {
      uVar2 = *(uint *)(param_1 + 0xd8);
      *(uint *)(param_1 + 0xd8) = uVar2 + 1;
      local_c = *(int *)(param_1 + 0xdc) + (uint)(0xfffffffe < uVar2);
      *(int *)(param_1 + 0xdc) = local_c;
      local_10 = *(uint *)(param_1 + 0xd8);
      local_8 = local_10 + 1;
      local_4 = local_c + (uint)(0xfffffffe < local_10);
      iVar3 = 0;
      goto LAB_0046deda;
    }
  }
  else {
    *(uint *)(param_1 + 0xd8) = local_10;
    *(undefined4 *)(param_1 + 0xd0) = 1;
    *(int *)(param_1 + 0xdc) = local_c;
LAB_0046ded2:
    if (iVar3 != 0) goto LAB_0046dfb7;
LAB_0046deda:
    iVar1 = *(int *)(param_1 + 0xac);
    if ((iVar1 < local_c) || ((iVar1 <= local_c && (*(uint *)(param_1 + 0xa8) <= local_10)))) {
      if ((*(int *)(param_1 + 0xb4) < local_c) ||
         ((*(int *)(param_1 + 0xb4) <= local_c && (*(uint *)(param_1 + 0xb0) <= local_10)))) {
        *(undefined4 *)(param_1 + 0xcc) = 0;
        iVar3 = 1;
        FUN_0057ca60(2,0,0);
      }
      else {
        if ((local_10 == *(uint *)(param_1 + 0xa8)) && (local_c == iVar1)) {
          (**(code **)(*param_2 + 0x40))(param_2,1);
        }
        uVar2 = *(uint *)(param_1 + 0xc0);
        *(undefined4 *)(param_1 + 0xcc) = 1;
        *(uint *)(param_1 + 0xc0) = uVar2 + 1;
        *(uint *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + (uint)(0xfffffffe < uVar2);
      }
      goto LAB_0046dfb7;
    }
    *(undefined4 *)(param_1 + 0xcc) = 0;
  }
  iVar3 = 1;
LAB_0046dfb7:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xe0));
  return iVar3;
}


