/* Module: encn3260.dll
   Function: FUN_664cd3f0
   Address: 664cd3f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_664cd3f0(void *this,char *param_1,uint *param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  char *_Str2;
  int iVar3;
  uint uVar4;
  int local_10;
  int local_c;
  int local_8;
  
  local_c = *(int *)((int)this + 0x58);
  uVar4 = 0;
  local_8 = 0;
  if (local_c == 0) {
    return 0;
  }
  local_10 = *(int *)(local_c + 4);
  iVar3 = 0;
  if (local_10 != 0) {
    piVar2 = (int *)0x0;
    if (local_10 == 0) goto LAB_664cd434;
    do {
      puVar1 = (undefined4 *)FUN_664bab80(local_10);
      piVar2 = (int *)*puVar1;
LAB_664cd434:
      if (piVar2 != (int *)0x0) {
        _Str2 = (char *)(**(code **)(*piVar2 + 0x1c))(piVar2);
        iVar3 = _stricmp(param_1,_Str2);
        if (iVar3 == 0) {
          iVar3 = 1;
          break;
        }
      }
      uVar4 = uVar4 + 1;
      FUN_664bab40(&local_10);
      iVar3 = local_8;
    } while (local_10 != 0);
  }
  *param_2 = -(uint)(iVar3 != 0) & uVar4;
  return iVar3;
}


