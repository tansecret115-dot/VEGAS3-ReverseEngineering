/* Module: vegas30.exe
   Function: FUN_0057a990
   Address: 0057a990
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x0057ab8a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_0057a990(int param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int *unaff_EBP;
  int iVar4;
  int *piVar5;
  undefined4 local_318;
  uint local_314 [2];
  CHAR local_30c [248];
  int aiStack_214 [3];
  WCHAR local_208 [256];
  undefined4 uStack_8;
  uint uStack_4;
  
  iVar4 = 0;
  local_30c[0] = '\0';
  local_208[0] = L'\0';
  FUN_0057ac80();
  FUN_005fb140(1);
  if (param_3 == 0x14) {
    if (DAT_0064b4e0 == 0) {
      iVar2 = FUN_00601ab0(&local_318,local_314,1);
      if (iVar2 < 0) {
        DAT_0064b4f0 = 1;
      }
      else if ((int)DAT_0064b4e0 <= (int)(local_314[0] & 0xff)) {
        DAT_0064b4f0 = 0;
        _DAT_0064b4f4 = local_318;
        DAT_0064b4e0 = local_314[0] & 0xff;
      }
    }
    if ((int)DAT_0064b4e0 < 0x40) {
      if (DAT_0064b4e4 == 0) {
        iVar2 = FUN_00601ab0(&local_318,local_314,1);
        if (iVar2 < 0) {
          DAT_0064b4f0 = 1;
        }
        else {
          uVar3 = (local_314[0] & 0xffff) >> 8;
          if ((int)DAT_0064b4e4 <= (int)uVar3) {
            DAT_0064b4f0 = 0;
            _DAT_0064b4f4 = local_318;
            DAT_0064b4e4 = uVar3;
          }
        }
      }
      if ((((int)DAT_0064b4e4 < 0x40) && ((DAT_0064761c & 0x8000) == 0)) &&
         (*(int *)(param_1 + 0x1ec) == 0)) {
        return 0;
      }
    }
    if ((*(int *)(param_1 + 0x1ec) != 0) && (iVar2 = FUN_0057ae90(0xed9), iVar2 == 0)) {
      return 0;
    }
  }
  if (DAT_0064b508 != 0) {
    return 0;
  }
  iVar2 = FUN_0057ace0(param_3);
  if (iVar2 == 0) {
    FUN_0057ad60(param_3,local_30c);
    MultiByteToWideChar(0,1,local_30c,-1,local_208,0x104);
    puVar1 = *(undefined4 **)(param_1 + 8);
    uStack_4 = (uint)(ushort)uStack_4;
    if (puVar1 != (undefined4 *)0x0) {
      local_314[0] = 0;
      iVar4 = (**(code **)*puVar1)(puVar1,&DAT_0061be98,local_314);
      if (-1 < iVar4) {
        if (((DAT_0064b4f0 == 0) && (iVar4 = FUN_0057adb0(uStack_4), 0 < iVar4)) &&
           (*(int *)(param_1 + 0x1ec) != 0)) {
          SfOem_Init((void **)&stack0xfffffcdc,(char *)0x0,(char *)0x0);
          SfOem_Done((void *)0x0);
        }
        piVar5 = aiStack_214;
        iVar4 = (**(code **)(*unaff_EBP + 0x10))(unaff_EBP,uStack_8,500,0x160,1,piVar5,0);
        if (iVar4 == 0) {
          SfMsgBox(DAT_00647624,0x40,
                   "This application will restart to complete the upgrade process.");
          DAT_0064b508 = 1;
          PostMessageA(DAT_00647624,0x10,0,0);
        }
        (**(code **)(*piVar5 + 8))(piVar5);
      }
    }
  }
  return iVar4;
}


