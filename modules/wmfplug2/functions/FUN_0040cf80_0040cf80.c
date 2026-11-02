/* Module: wmfplug2.dll
   Function: FUN_0040cf80
   Address: 0040cf80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_0040cf80(void *this,int param_1,int param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *local_8;
  int *piStack_4;
  
  iVar3 = 0;
  iVar4 = 0;
  if (0 < *(int *)((int)this + 0x224)) {
    do {
      puVar1 = *(undefined4 **)(*(int *)(*(int *)((int)this + 0x228) + 8) + iVar4 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        iVar2 = (**(code **)*puVar1)(puVar1,&DAT_0047ac10,&local_8);
        if (iVar2 < 0) {
          iVar2 = (**(code **)*puVar1)(puVar1,&DAT_0047abf0,&piStack_4);
          if (-1 < iVar2) {
            if (param_2 != 0) {
              if (param_1 == iVar3) {
                if (param_4 != (int *)0x0) {
                  *param_4 = iVar4;
                }
                *param_3 = piStack_4;
                return 0;
              }
              iVar3 = iVar3 + 1;
            }
            if (piStack_4 != (int *)0x0) {
              (**(code **)(*piStack_4 + 8))(piStack_4);
            }
            piStack_4 = (int *)0x0;
          }
        }
        else {
          if (param_2 == 0) {
            if (param_1 == iVar3) {
              if (param_4 != (int *)0x0) {
                *param_4 = iVar4;
              }
              *param_3 = local_8;
              return 0;
            }
            iVar3 = iVar3 + 1;
          }
          if (local_8 != (int *)0x0) {
            (**(code **)(*local_8 + 8))(local_8);
          }
          local_8 = (int *)0x0;
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)((int)this + 0x224));
  }
  return 0x80004005;
}


