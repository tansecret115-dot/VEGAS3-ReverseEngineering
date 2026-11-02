/* Module: pngu3266.dll
   Function: GetDiskSpace
   Address: 60612b8d
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: static void __cdecl CPNSystemInfo::GetDiskSpace(class CPNString const &,unsigned long
   &,unsigned long &) */

void __cdecl CPNSystemInfo::GetDiskSpace(CPNString *param_1,ulong *param_2,ulong *param_3)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined3 extraout_var;
  int iVar3;
  undefined8 uVar4;
  int local_74 [13];
  int local_40 [13];
  ulong local_c;
  int local_8;
  
                    /* 0x22b8d  1183  ?GetDiskSpace@CPNSystemInfo@@SAXABVCPNString@@AAK1@Z */
  FUN_6061c330(local_40);
  if (*(int *)(*(int *)param_1 + -8) < 1) {
    puVar2 = FUN_6061be50(local_74);
    FUN_6061c370(local_40,puVar2);
    thunk_FUN_60618cd0(local_74);
  }
  else {
    FUN_6061c390(local_40,(undefined4 *)param_1);
  }
  puVar2 = FUN_6061c3d0(local_40,local_74);
  FUN_6061c370(local_40,puVar2);
  thunk_FUN_60618cd0(local_74);
  bVar1 = thunk_FUN_6061bf80((int)local_40);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    iVar3 = FUN_6061bcc0(local_40,(longlong *)&local_c);
    if (-1 < iVar3) {
      uVar4 = __allshr(0x20,local_8);
      *param_2 = (ulong)uVar4;
      *param_3 = local_c;
    }
  }
  thunk_FUN_60618cd0(local_40);
  return;
}


