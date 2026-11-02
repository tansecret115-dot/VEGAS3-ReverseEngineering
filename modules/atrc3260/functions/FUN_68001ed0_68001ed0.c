/* Module: atrc3260.dll
   Function: FUN_68001ed0
   Address: 68001ed0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall
FUN_68001ed0(void *this,int param_1,short param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined2 uVar1;
  short sVar2;
  void *this_00;
  undefined4 *puVar3;
  FARPROC pFVar4;
  undefined *this_01;
  int iVar5;
  undefined2 *puVar6;
  undefined2 extraout_var;
  ushort local_8 [2];
  
  local_8[0] = 0;
  local_8[1] = 0;
  if (7 < *(ushort *)this) {
    return -0x7ff8ffa9;
  }
  if (*(int *)((int)this + 0x2e) == 0) {
    this_00 = operator_new(0x18);
    if (this_00 == (void *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3 = FUN_68002c70(this_00,s_tokr3260_dll_68005068,2);
    }
    *(undefined4 **)((int)this + 0x2e) = puVar3;
    if ((puVar3 == (undefined4 *)0x0) || (puVar3[1] != 0)) {
      return -0x7ffbfff1;
    }
    pFVar4 = FUN_68002ec0(puVar3,s_OpenEncoder_680050b4);
    *(FARPROC *)((int)this + 0x42) = pFVar4;
    pFVar4 = FUN_68002ec0(*(void **)((int)this + 0x2e),s_CloseEncoder_680050a4);
    *(FARPROC *)((int)this + 0x46) = pFVar4;
    pFVar4 = FUN_68002ec0(*(void **)((int)this + 0x2e),s_tkInitEncoder_68005094);
    *(FARPROC *)((int)this + 0x56) = pFVar4;
    pFVar4 = FUN_68002ec0(*(void **)((int)this + 0x2e),s_tkEncode_68005088);
    *(FARPROC *)((int)this + 0x5a) = pFVar4;
    pFVar4 = FUN_68002ec0(*(void **)((int)this + 0x2e),s_tkFreeEncoder_68005078);
    *(FARPROC *)((int)this + 0x5e) = pFVar4;
  }
  if ((*(int *)((int)this + 0x36) == 0) && (*(code **)((int)this + 0x42) != (code *)0x0)) {
    sVar2 = (**(code **)((int)this + 0x42))((undefined4 *)((int)this + 0x36));
    if (sVar2 != 0) {
      return (int)sVar2;
    }
  }
  this_01 = FUN_680011f0();
  if (this_01 != (undefined *)0x0) {
    iVar5 = FUN_68001490(this_01,CONCAT22(extraout_var,*(undefined2 *)this),2,local_8);
    if (((local_8[0] == 10) && (*(int *)(iVar5 + 2) == param_1)) &&
       ((uint)*(ushort *)(iVar5 + 6) == (int)param_2)) {
      *(uint *)((int)this + 0x26) = (uint)*(ushort *)(iVar5 + 8);
      puVar3 = (undefined4 *)
               FUN_68001490(this_01,CONCAT22((short)((uint)iVar5 >> 0x10),*(undefined2 *)this),6,
                            local_8);
      if (local_8[0] == 4) {
        *(undefined4 *)((int)this + 0x1a) = *puVar3;
        puVar3 = (undefined4 *)
                 FUN_68001490(this_01,CONCAT22((short)((uint)puVar3 >> 0x10),*(undefined2 *)this),
                              0xe,local_8);
        if (local_8[0] == 4) {
          *(undefined4 *)((int)this + 0x16) = *puVar3;
          puVar3 = (undefined4 *)
                   FUN_68001490(this_01,CONCAT22((short)((uint)puVar3 >> 0x10),*(undefined2 *)this),
                                0xd,local_8);
          if (local_8[0] == 4) {
            *(undefined4 *)((int)this + 0x22) = *puVar3;
            puVar6 = (undefined2 *)
                     FUN_68001490(this_01,CONCAT22((short)((uint)puVar3 >> 0x10),*(undefined2 *)this
                                                  ),1000,local_8);
            if (local_8[0] == 2) {
              uVar1 = *puVar6;
              *(uint *)((int)this + 0x1e) =
                   *(uint *)((int)this + 0x1a) / *(uint *)((int)this + 0x22);
              *param_3 = *(undefined4 *)((int)this + 0x16);
              *param_4 = *(undefined4 *)((int)this + 0x1a);
              if (*(code **)((int)this + 0x56) != (code *)0x0) {
                sVar2 = (**(code **)((int)this + 0x56))
                                  (*(undefined4 *)((int)this + 0x36),
                                   *(uint *)((int)this + 0x16) / *(uint *)((int)this + 0x1e),
                                   *(undefined4 *)((int)this + 0x26),uVar1,
                                   *(int *)((int)this + 0x22) << 3,param_1);
                return (int)sVar2;
              }
            }
          }
        }
      }
    }
  }
  return -0x7fffbffb;
}


