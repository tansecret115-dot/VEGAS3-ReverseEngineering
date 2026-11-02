/* Module: sftrans1.dll
   Function: FUN_00498e70
   Address: 00498e70
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00498e70(int *param_1,HWND param_2,undefined4 *param_3)

{
  float *pfVar1;
  undefined4 *puVar2;
  int iVar3;
  int *unaff_EDI;
  float10 fVar4;
  short unaff_retaddr;
  int *local_108 [65];
  short sStack_4;
  
  puVar2 = *(undefined4 **)param_1[2];
  local_108[0] = (int *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    (**(code **)*puVar2)(puVar2,&DAT_00555130,local_108);
  }
  pfVar1 = (float *)(param_1 + 0x1a);
  (**(code **)(*local_108[0] + 0xc))(local_108[0],pfVar1);
  if (unaff_retaddr == 0x1647) {
    if (sStack_4 == 0x200) {
      iVar3 = GetWindowTextA(param_2,&stack0xfffffef4,0x104);
      if (iVar3 == 0) {
LAB_0049907b:
        FUN_00498a40();
      }
      else {
        fVar4 = (float10)FUN_004d6ed0(&stack0xfffffef4,0);
        if ((float10)_DAT_00555910 <= fVar4) {
          fVar4 = (float10)FUN_004d6ed0(&stack0xfffffef4,0);
          if (fVar4 <= (float10)_DAT_00555908) {
            fVar4 = (float10)FUN_004d6ed0(&stack0xfffffef4,0);
            param_1[0x1b] = (int)(float)fVar4;
            (**(code **)(*param_1 + 0x2c))(param_1);
          }
          else {
            param_1[0x1b] = (int)(float)_DAT_00555908;
            (**(code **)(*param_1 + 0x2c))(param_1);
          }
        }
        else {
          param_1[0x1b] = (int)(float)_DAT_00555910;
          (**(code **)(*param_1 + 0x2c))(param_1);
        }
      }
    }
  }
  else {
    if (unaff_retaddr == 0x1649) {
      if (sStack_4 == 0x200) {
        iVar3 = GetWindowTextA(param_2,&stack0xfffffef4,0x104);
        if (iVar3 != 0) {
          fVar4 = (float10)FUN_004d6ed0(&stack0xfffffef4,0);
          param_1[0x1c] = (int)(float)fVar4;
          (**(code **)(*param_1 + 0x2c))(param_1);
          *param_3 = 1;
          goto LAB_0049908f;
        }
        FUN_00498a40();
      }
      *param_3 = 1;
      goto LAB_0049908f;
    }
    if (unaff_retaddr != 0x164a) {
      *param_3 = 0;
      goto LAB_0049908f;
    }
    if (sStack_4 == 0x200) {
      iVar3 = GetWindowTextA(param_2,&stack0xfffffef4,0x104);
      if (iVar3 == 0) goto LAB_0049907b;
      fVar4 = (float10)FUN_004d6ed0(&stack0xfffffef4,0);
      if ((float10)_DAT_00555910 <= fVar4) {
        fVar4 = (float10)FUN_004d6ed0(&stack0xfffffef4,0);
        if (fVar4 <= (float10)_DAT_00555908) {
          fVar4 = (float10)FUN_004d6ed0(&stack0xfffffef4,0);
          *pfVar1 = (float)fVar4;
          (**(code **)(*param_1 + 0x2c))(param_1);
        }
        else {
          *pfVar1 = (float)_DAT_00555908;
          (**(code **)(*param_1 + 0x2c))(param_1);
        }
      }
      else {
        *pfVar1 = (float)_DAT_00555910;
        (**(code **)(*param_1 + 0x2c))(param_1);
      }
    }
  }
  *param_3 = 1;
LAB_0049908f:
  if (unaff_EDI != (int *)0x0) {
    (**(code **)(*unaff_EDI + 8))(unaff_EDI);
  }
  return 0;
}


