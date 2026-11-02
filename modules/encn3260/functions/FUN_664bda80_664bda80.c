/* Module: encn3260.dll
   Function: FUN_664bda80
   Address: 664bda80
   Source: Ghidra pseudocode (Stage 10 batch) */


void * __thiscall FUN_664bda80(void *this,void *param_1)

{
  char *_Dest;
  int *piVar1;
  int iVar2;
  int local_10 [3];
  
  _Dest = operator_new(*(int *)(*(int *)((int)this + 0x40) + -8) + 0x50);
  sprintf(_Dest,s_RTSP__d__d__s__s_664ef7ac,*(undefined4 *)((int)this + 4),
          *(undefined4 *)((int)this + 8),*(undefined4 *)((int)this + 0x34),
          *(undefined4 *)((int)this + 0x40));
  FUN_664bb450(local_10,_Dest);
  operator_delete(_Dest);
  piVar1 = (int *)FUN_664bd7a0((int)this);
  while (piVar1 != (int *)0x0) {
    FUN_664bb810(local_10,(char *)piVar1[1]);
    FUN_664bb810(local_10,&DAT_664ef794);
    (**(code **)(*piVar1 + 4))(local_10);
    piVar1 = (int *)FUN_664bd7c0((int)this);
  }
  FUN_664bb810(local_10,&DAT_664e3044);
  iVar2 = FUN_664bd810((int)this);
  if (0 < iVar2) {
    FUN_664bb810(local_10,*(char **)((int)this + 0x10));
  }
  FUN_664bb2e0(param_1,local_10);
  FUN_664bb3e0(local_10);
  return param_1;
}


