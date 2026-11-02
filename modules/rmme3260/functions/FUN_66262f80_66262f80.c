/* Module: rmme3260.dll
   Function: FUN_66262f80
   Address: 66262f80
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_66262f80(void *this,void *param_1)

{
  int iVar1;
  int iVar2;
  char *local_14;
  char *local_10;
  int *local_c;
  int *local_8;
  
  local_14 = (char *)0x0;
  local_10 = (char *)0x0;
  local_c = (int *)0x0;
  local_8 = (int *)0x0;
  if (param_1 == (void *)0x0) {
    iVar2 = 8;
  }
  else {
    iVar2 = FUN_66263580(param_1,&local_c);
    if (iVar2 == 0) {
      iVar1 = (**(code **)*local_c)(local_c,&DAT_6626a8b8,&local_8);
      if (iVar1 == 0) {
        iVar1 = (**(code **)(*local_8 + 0xc))(local_8,&local_10,&local_14);
        if (iVar1 == 0) {
          FUN_66250410((void *)((int)this + 0x24),local_10);
          FUN_66250410((void *)((int)this + 0x18),local_14);
          *(void **)this = param_1;
          FUN_66263520((int)param_1);
          *(int *)((int)this + 4) = DAT_6627f328;
          DAT_6627f328 = DAT_6627f328 + 1;
        }
        else {
          iVar2 = 0xb;
        }
      }
      else {
        iVar2 = 8;
      }
    }
  }
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 8))(local_8);
    local_8 = (int *)0x0;
  }
  if (local_c != (int *)0x0) {
    (**(code **)(*local_c + 8))(local_c);
  }
  return iVar2;
}


