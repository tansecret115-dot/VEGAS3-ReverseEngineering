/* Module: pngu3266.dll
   Function: FindString
   Address: 60600325
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: long __thiscall CPNListBox::FindString(char const *) */

long __thiscall CPNListBox::FindString(CPNListBox *this,char *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char *local_14 [3];
  int local_8;
  
                    /* 0x10325  1050  ?FindString@CPNListBox@@QAEJPBD@Z */
  local_8 = (**(code **)(*(int *)this + 0x130))();
  while( true ) {
    if (local_8 == 0) {
      return -1;
    }
    local_8 = local_8 + -1;
    FUN_60618bb0(local_14);
    iVar2 = *(int *)this;
    uVar3 = 0x100;
    iVar4 = local_8;
    iVar1 = FUN_60619190(local_14,0x100);
    (**(code **)(iVar2 + 0x160))(iVar1,uVar3,iVar4);
    FUN_60619210(local_14,-1);
    iVar2 = strcmp(param_1,local_14[0]);
    if (iVar2 == 0) break;
    FUN_60618cd0((int *)local_14);
  }
  FUN_60618cd0((int *)local_14);
  return local_8;
}


