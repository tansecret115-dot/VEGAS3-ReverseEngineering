/* Module: vegas30k.dll
   Function: Mixer_HasBusFX
   Address: 01181380
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall Mixer_HasBusFX(unsigned long,unsigned long *) */

long Mixer_HasBusFX(ulong param_1,ulong *param_2)

{
  long lVar1;
  int *piVar2;
  undefined4 local_4;
  
                    /* 0x181380  198  ?Mixer_HasBusFX@@YGJKPAK@Z */
  local_4 = 0;
  piVar2 = DAT_012b09c8;
  lVar1 = (**(code **)(*DAT_012b09c8 + 0x1e0))(DAT_012b09c8,&local_4,1);
  if (-1 < lVar1) {
    lVar1 = (**(code **)(*piVar2 + 0x100))(piVar2);
    (**(code **)(*(int *)param_1 + 8))(param_1);
  }
  return lVar1;
}


