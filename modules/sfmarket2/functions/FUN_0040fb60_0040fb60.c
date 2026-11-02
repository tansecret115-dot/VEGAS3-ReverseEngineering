/* Module: sfmarket2.dll
   Function: FUN_0040fb60
   Address: 0040fb60
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x0040fcce) */
/* WARNING: Removing unreachable block (ram,0x0040fcd8) */
/* WARNING: Removing unreachable block (ram,0x0040fced) */
/* WARNING: Removing unreachable block (ram,0x0040fcf6) */

int __thiscall FUN_0040fb60(void *this,int param_1,int *param_2)

{
  int iVar1;
  LPCRITICAL_SECTION unaff_EBX;
  undefined4 *unaff_ESI;
  int unaff_EDI;
  undefined4 local_10;
  int local_c;
  int local_8;
  LPCRITICAL_SECTION local_4;
  
  local_4 = (LPCRITICAL_SECTION)((int)this + 4);
  EnterCriticalSection(local_4);
  if (param_1 == 0) {
    local_c = (int)this + 0x24;
  }
  else {
    local_c = (int)this + 0x20;
  }
  local_10 = 0;
  local_8 = 2;
  iVar1 = (**(code **)(*param_2 + 0x10))(param_2,&local_8,4,&local_10);
  if (iVar1 < 0) goto LAB_0040fcfd;
  if (unaff_EDI == 4) {
    if (param_1 == 0) {
      local_c = 0;
      local_8 = 4;
      iVar1 = (**(code **)(*param_2 + 0x10))(param_2,&local_8,4,&local_c);
      if (-1 < iVar1) {
        if (local_c == 4) {
          local_c = 0;
          iVar1 = (**(code **)(*param_2 + 0x10))(param_2,(int)this + 0x28,local_8,&local_c);
          if ((iVar1 < 0) || (local_8 == local_c)) goto LAB_0040fc2d;
        }
        iVar1 = -0x7ffb1fc7;
      }
LAB_0040fc2d:
      if (iVar1 < 0) goto LAB_0040fcfd;
      local_c = 0;
      local_8 = 4;
      iVar1 = (**(code **)(*param_2 + 0x10))(param_2,&local_8,4,&local_c);
      if (-1 < iVar1) {
        if (local_c == 4) {
          local_c = 0;
          iVar1 = (**(code **)(*param_2 + 0x10))(param_2,(int)this + 0x2c,local_8,&local_c);
          if ((iVar1 < 0) || (local_8 == local_c)) goto LAB_0040fc90;
        }
        iVar1 = -0x7ffb1fc7;
      }
    }
LAB_0040fc90:
    if (iVar1 < 0) goto LAB_0040fcfd;
    if ((int *)*unaff_ESI == (int *)0x0) {
      local_c = 0;
    }
    else {
      local_c = *(int *)*unaff_ESI;
    }
    iVar1 = (**(code **)(*param_2 + 0x10))(param_2,&local_c,4,&stack0xffffffe0);
    if (iVar1 < 0) goto LAB_0040fcfd;
  }
  iVar1 = -0x7ffb1fc7;
LAB_0040fcfd:
  LeaveCriticalSection(unaff_EBX);
  return iVar1;
}


