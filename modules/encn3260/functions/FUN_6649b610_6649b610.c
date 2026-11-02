/* Module: encn3260.dll
   Function: FUN_6649b610
   Address: 6649b610
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_6649b610(void *this,undefined4 param_1,int param_2)

{
  char cVar1;
  char *_Dest;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  code *pcVar5;
  char *pcVar6;
  
  _Dest = operator_new(0x800);
  pcVar5 = sprintf_exref;
  if (_Dest == (char *)0x0) {
    return 0x8007000e;
  }
  if (*(int *)((int)this + 0x7b) == 0) {
    iVar2 = sprintf(_Dest,s_POST__SmpDsBhgRl_664e3114);
    pcVar5 = sprintf_exref;
  }
  else if (*(ushort *)((int)this + 0x34) == 0) {
    iVar2 = sprintf(_Dest,s_POST_http____s_SmpDsBhgRl_664e3128,*(undefined4 *)((int)this + 0x2c));
    pcVar5 = sprintf_exref;
  }
  else {
    iVar2 = sprintf(_Dest,s_POST_http____s__d_SmpDsBhgRl_664e3144,*(undefined4 *)((int)this + 0x2c),
                    (uint)*(ushort *)((int)this + 0x34));
  }
  (**(code **)(**(int **)((int)this + 0x44) + 0x10))(_Dest,iVar2);
  uVar3 = (*pcVar5)(_Dest,s_HTTP_1_0_664e3108);
  (**(code **)(**(int **)((int)this + 0x44) + 0x10))(_Dest,uVar3);
  uVar3 = (*pcVar5)(_Dest,s_User_Agent__RealPlayer_G2_664e30ec);
  (**(code **)(**(int **)((int)this + 0x44) + 0x10))(_Dest,uVar3);
  uVar3 = (*pcVar5)(_Dest,s_Pragma__no_cache_664e30d8);
  (**(code **)(**(int **)((int)this + 0x44) + 0x10))(_Dest,uVar3);
  uVar3 = (*pcVar5)(_Dest,s_Expires__Mon__18_May_1974_00_00__664e30ac);
  (**(code **)(**(int **)((int)this + 0x44) + 0x10))(_Dest,uVar3);
  uVar3 = (*pcVar5)(_Dest,s_Accept______664e309c);
  (**(code **)(**(int **)((int)this + 0x44) + 0x10))(_Dest,uVar3);
  uVar3 = (*pcVar5)(_Dest,s_Content_type__application_x_pncm_664e3078);
  (**(code **)(**(int **)((int)this + 0x44) + 0x10))(_Dest,uVar3);
  uVar4 = 0xffffffff;
  pcVar6 = *(char **)((int)this + 0x68);
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  if ((*(byte *)((int)this + 0x6d) & 4) == 0) {
    iVar2 = sprintf(_Dest,s_Content_length__32767_664e3048);
  }
  else {
    iVar2 = sprintf(_Dest,s_Content_length___hu_664e3060,~uVar4 + 1 + param_2 & 0xffff);
  }
  (**(code **)(**(int **)((int)this + 0x44) + 0x10))(_Dest,iVar2);
  iVar2 = sprintf(_Dest,&DAT_664e3044);
  (**(code **)(**(int **)((int)this + 0x44) + 0x10))(_Dest,iVar2);
  (**(code **)(**(int **)((int)this + 0x44) + 0x10))(*(undefined4 *)((int)this + 0x68),~uVar4 - 1);
  iVar2 = sprintf(_Dest,&DAT_664e3044);
  (**(code **)(**(int **)((int)this + 0x44) + 0x10))(_Dest,iVar2);
  if ((short)param_2 != 0) {
    (**(code **)(**(int **)((int)this + 0x44) + 0x10))(param_1,param_2);
  }
  operator_delete(_Dest);
  return 0;
}


