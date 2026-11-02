/* Module: encn3260.dll
   Function: FUN_66489b40
   Address: 66489b40
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66489b40(int *param_1)

{
  int *piVar1;
  int *this;
  int iVar2;
  char *_Str1;
  int *local_8;
  
  local_8 = param_1;
  this = operator_new(0x40);
  if (this == (int *)0x0) {
    this = (int *)0x0;
  }
  else {
    FUN_664bd560(this);
    FUN_664bb2c0(this + 0xd);
    *this = (int)&PTR_FUN_664de100;
  }
  FUN_664bbb00(param_1 + 0x27,s_rtsp______200s__u_664e270c);
  FUN_664bb5e0(this + 0xd,(char *)param_1[0x27]);
  FUN_664bd620(this,s_User_Agent_664e2700,(char *)param_1[0x24],0);
  piVar1 = (int *)param_1[0x20];
  local_8 = (int *)0x0;
  if (piVar1 != (int *)0x0) {
    iVar2 = (**(code **)(*piVar1 + 0x30))(piVar1,s_ConnectionlessControl_664e2260,&local_8);
    if (iVar2 == 0) {
      _Str1 = (char *)(**(code **)(*local_8 + 0x1c))(local_8);
      iVar2 = _stricmp(_Str1,&DAT_664e2278);
      *(uint *)((int)param_1 + 0x176) = (uint)(iVar2 == 0);
      (**(code **)(*local_8 + 8))(local_8);
    }
  }
  FUN_6648c9d0(this,(int *)param_1[0x20]);
  iVar2 = FUN_6648bad0((void *)param_1[0x1c],(int)param_1);
  FUN_6648c6d0(param_1,this,iVar2);
  return;
}


