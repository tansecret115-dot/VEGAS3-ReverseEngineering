/* Module: sfpaplug.dll
   Function: FUN_0040e1d0
   Address: 0040e1d0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __thiscall
FUN_0040e1d0(void *this,uint param_1,int param_2,DWORD param_3,LPVOID param_4,undefined4 param_5,
            uint *param_6,int *param_7)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  DWORD DVar4;
  BOOL BVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  undefined8 local_18;
  uint local_10;
  uint local_8;
  
  puVar1 = (uint *)(*(int *)((int)this + 0xf4) + 8);
  uVar2 = *puVar1;
  local_18._4_4_ = *(int *)(*(int *)((int)this + 0xf4) + 0xc);
  lVar3 = *(longlong *)puVar1;
  lVar8 = __allmul((uint)*(ushort *)(*(int *)((int)this + 0x50) + 0xc),0,param_1,param_2);
  lVar8 = lVar8 + lVar3;
  local_10 = (uint)(lVar8 + (int)param_3);
  iVar6 = (int)((ulonglong)(lVar8 + (int)param_3) >> 0x20);
  local_8 = *(uint *)((int)this + 0x38) + uVar2;
  iVar7 = *(int *)((int)this + 0x3c) + local_18._4_4_ +
          (uint)CARRY4(*(uint *)((int)this + 0x38),uVar2);
  local_18 = lVar8;
  SetFilePointer(*(HANDLE *)(*(int *)((int)this + 4) + 0x214),(LONG)lVar8,
                 (PLONG)((int)&local_18 + 4),0);
  if ((iVar7 <= iVar6) &&
     (((iVar7 < iVar6 || (local_8 < local_10)) &&
      (param_3 = param_3 + (local_10 - local_8), (int)param_3 < 0)))) {
    param_3 = 0;
  }
  DVar4 = param_3;
  BVar5 = ReadFile(*(HANDLE *)(*(int *)((int)this + 4) + 0x214),param_4,param_3,&param_1,
                   (LPOVERLAPPED)0x0);
  if (BVar5 == 0) {
    return 0x8004e008;
  }
  *param_6 = param_1;
  *param_7 = (int)param_1 / (int)(uint)*(ushort *)(*(int *)((int)this + 0x50) + 0xc);
  return -(uint)(*param_6 != DVar4) & 0x8004e008;
}


