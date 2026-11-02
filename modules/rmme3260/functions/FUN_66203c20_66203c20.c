/* Module: rmme3260.dll
   Function: FUN_66203c20
   Address: 66203c20
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x66203c49) */
/* WARNING: Removing unreachable block (ram,0x66203cb7) */

int __thiscall FUN_66203c20(void *this,short param_1,undefined2 *param_2)

{
  void *pvVar1;
  undefined2 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_10 = *(int *)((int)this + 0x14);
  local_c = (int)this + 0x10;
  iVar4 = -0x7fffbffb;
  local_8 = 0;
  do {
    if (local_10 == 0) {
LAB_66203c9a:
      if ((-1 < iVar4) && (local_8 == 0)) {
        local_18 = *(int *)((int)this + 0x28);
        local_14 = (int)this + 0x24;
        if (local_18 != 0) {
          while( true ) {
            puVar3 = (undefined4 *)FUN_66250c10(local_18);
            pvVar1 = (void *)*puVar3;
            iVar4 = FUN_66206550(pvVar1,param_1,&local_8);
            if (iVar4 < 0) break;
            if (local_8 != 0) {
              uVar2 = FUN_662182a0((int)pvVar1);
              *param_2 = uVar2;
              return iVar4;
            }
            FUN_66250bf0(&local_18);
            if (local_18 == 0) {
              return iVar4;
            }
          }
        }
      }
      return iVar4;
    }
    puVar3 = (undefined4 *)FUN_66250c10(local_10);
    pvVar1 = (void *)*puVar3;
    iVar4 = FUN_66206550(pvVar1,param_1,&local_8);
    if (iVar4 < 0) {
      return iVar4;
    }
    if (local_8 != 0) {
      uVar2 = FUN_662182a0((int)pvVar1);
      *param_2 = uVar2;
      goto LAB_66203c9a;
    }
    FUN_66250bf0(&local_10);
  } while( true );
}


