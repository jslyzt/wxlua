// ---------------------------------------------------------------------------
// wxbase.h - headers and wxLua types for wxLua binding
//
// This file was generated by genwxbind.lua 
// Any changes made to this file will be lost when the file is regenerated
// ---------------------------------------------------------------------------

#ifndef __HOOK_WXLUA_wxbase_H__
#define __HOOK_WXLUA_wxbase_H__

#include "wxbind/include/wxbinddefs.h"
#include "wxluasetup.h"

// ----------------------------------------------------------------------------
// Convert from wxWidgets wxT('') to wxT(""), a string. Copied from wx/filefn.h

// platform independent versions
#if defined(__UNIX__) && !defined(__OS2__)
  // CYGWIN also uses UNIX settings
  #define wxLua_FILE_SEP_PATH     wxT("/")
#elif defined(__MAC__)
  #define wxLua_FILE_SEP_PATH     wxT(":")
#else   // Windows and OS/2
  #define wxLua_FILE_SEP_PATH     wxT("\\")
#endif  // Unix/Windows

extern WXDLLIMPEXP_BINDWXBASE wxDateTime::TimeZone wxLua_wxDateTime_TimeZone_Local;


#include "wxlua/wxlstate.h"
#include "wxlua/wxlbind.h"

// ---------------------------------------------------------------------------
// Check if the version of binding generator used to create this is older than
//   the current version of the bindings.
//   See 'bindings/genwxbind.lua' and 'modules/wxlua/wxldefs.h'
#if WXLUA_BINDING_VERSION > 32
#   error "The WXLUA_BINDING_VERSION in the bindings is too old, regenerate bindings."
#endif //WXLUA_BINDING_VERSION > 32
// ---------------------------------------------------------------------------

// binding class
class WXDLLIMPEXP_BINDWXBASE wxLuaBinding_wxbase : public wxLuaBinding
{
public:
    wxLuaBinding_wxbase();

    virtual bool RegisterBinding(const wxLuaState& wxlState);

private:
    DECLARE_DYNAMIC_CLASS(wxLuaBinding_wxbase)
};


// initialize wxLuaBinding_wxbase for all wxLuaStates
extern WXDLLIMPEXP_BINDWXBASE wxLuaBinding* wxLuaBinding_wxbase_init();

// ---------------------------------------------------------------------------
// Includes
// ---------------------------------------------------------------------------

#if (wxUSE_FILESYSTEM) && (wxUSE_FS_INET && wxUSE_SOCKETS) && (wxUSE_STREAMS)
    #include "wx/fs_inet.h"
#endif // (wxUSE_FILESYSTEM) && (wxUSE_FS_INET && wxUSE_SOCKETS) && (wxUSE_STREAMS)

#if (wxUSE_FILESYSTEM) && (wxUSE_STREAMS)
    #include "wx/filesys.h"
    #include "wx/fs_arc.h"
    #include "wx/fs_filter.h"
#endif // (wxUSE_FILESYSTEM) && (wxUSE_STREAMS)

#include "sys/stat.h"
#include "wx/dynlib.h"
#include "wx/event.h"
#include "wx/filefn.h"
#include "wx/iconloc.h"
#include "wx/intl.h"
#include "wx/mimetype.h"
#include "wx/timer.h"
#include "wx/tokenzr.h"
#include "wx/utils.h"

#if wxCHECK_VERSION(2,8,0) && wxLUA_USE_wxStandardPaths
    #include "wx/stdpaths.h"
#endif // wxCHECK_VERSION(2,8,0) && wxLUA_USE_wxStandardPaths

#if wxLUA_USE_wxArrayInt
    #include "wx/dynarray.h"
#endif // wxLUA_USE_wxArrayInt

#if wxLUA_USE_wxArrayString
    #include "wx/arrstr.h"
#endif // wxLUA_USE_wxArrayString

#if wxLUA_USE_wxClassInfo
    #include "wx/object.h"
#endif // wxLUA_USE_wxClassInfo

#if wxLUA_USE_wxConfig && wxUSE_CONFIG
    #include "wx/confbase.h"
    #include "wx/config.h"
    #include "wx/fileconf.h"
    #include "wx/memconf.h"
#endif // wxLUA_USE_wxConfig && wxUSE_CONFIG

#if wxLUA_USE_wxCriticalSection && wxUSE_THREADS
    #include "wx/thread.h"
#endif // wxLUA_USE_wxCriticalSection && wxUSE_THREADS

#if wxLUA_USE_wxCriticalSectionLocker
    #include "wx/thread.h"
#endif // wxLUA_USE_wxCriticalSectionLocker

#if wxLUA_USE_wxDateSpan && wxUSE_DATETIME
    #include "wx/datetime.h"
#endif // wxLUA_USE_wxDateSpan && wxUSE_DATETIME

#if wxLUA_USE_wxDateTime && wxUSE_DATETIME
    #include "wx/datetime.h"
#endif // wxLUA_USE_wxDateTime && wxUSE_DATETIME

#if wxLUA_USE_wxDir
    #include "wx/dir.h"
#endif // wxLUA_USE_wxDir

#if wxLUA_USE_wxFile && wxUSE_FILE
    #include "wx/file.h"
#endif // wxLUA_USE_wxFile && wxUSE_FILE

#if wxLUA_USE_wxFileName
    #include "wx/filename.h"
#endif // wxLUA_USE_wxFileName

#if wxLUA_USE_wxList && !wxUSE_STL
    #include "wx/list.h"
#endif // wxLUA_USE_wxList && !wxUSE_STL

#if wxLUA_USE_wxLog && wxUSE_LOG
    #include "wx/log.h"
#endif // wxLUA_USE_wxLog && wxUSE_LOG

#if wxLUA_USE_wxObject
    #include "wx/object.h"
#endif // wxLUA_USE_wxObject

#if wxLUA_USE_wxRegEx && wxUSE_REGEX
    #include "wx/regex.h"
#endif // wxLUA_USE_wxRegEx && wxUSE_REGEX

#if wxLUA_USE_wxStopWatch && wxUSE_STOPWATCH
    #include "wx/stopwatch.h"
#endif // wxLUA_USE_wxStopWatch && wxUSE_STOPWATCH

#if wxLUA_USE_wxSystemOptions
    #include "wx/sysopt.h"
#endif // wxLUA_USE_wxSystemOptions

#if wxLUA_USE_wxTimeSpan && wxUSE_DATETIME
    #include "wx/datetime.h"
#endif // wxLUA_USE_wxTimeSpan && wxUSE_DATETIME

#if wxUSE_FSWATCHER && wxCHECK_VERSION(2,9,4)
    #include "wx/fswatcher.h"
#endif // wxUSE_FSWATCHER && wxCHECK_VERSION(2,9,4)

#if wxUSE_LONGLONG
    #include "wx/longlong.h"
#endif // wxUSE_LONGLONG

#if wxUSE_SNGLINST_CHECKER
    #include "wx/snglinst.h"
#endif // wxUSE_SNGLINST_CHECKER

#if wxUSE_STREAMS
    #include "wx/datstrm.h"
    #include "wx/mstream.h"
    #include "wx/stream.h"
    #include "wx/txtstrm.h"
    #include "wx/wfstream.h"
#endif // wxUSE_STREAMS

// ---------------------------------------------------------------------------
// Lua Tag Method Values and Tables for each Class
// ---------------------------------------------------------------------------

#if (wxUSE_FILESYSTEM) && (wxUSE_FS_INET && wxUSE_SOCKETS) && (wxUSE_STREAMS)
    extern WXDLLIMPEXP_DATA_BINDWXBASE(int) wxluatype_wxInternetFSHandler;
#endif // (wxUSE_FILESYSTEM) && (wxUSE_FS_INET && wxUSE_SOCKETS) && (wxUSE_STREAMS)

#if (wxUSE_FILESYSTEM) && (wxUSE_STREAMS)
    extern WXDLLIMPEXP_DATA_BINDWXBASE(int) wxluatype_wxArchiveFSHandler;
    extern WXDLLIMPEXP_DATA_BINDWXBASE(int) wxluatype_wxFSFile;
    extern WXDLLIMPEXP_DATA_BINDWXBASE(int) wxluatype_wxFileSystem;
    extern WXDLLIMPEXP_DATA_BINDWXBASE(int) wxluatype_wxFileSystemHandler;
    extern WXDLLIMPEXP_DATA_BINDWXBASE(int) wxluatype_wxFilterFSHandler;
    extern WXDLLIMPEXP_DATA_BINDWXBASE(int) wxluatype_wxLocalFSHandler;
#endif // (wxUSE_FILESYSTEM) && (wxUSE_STREAMS)

extern WXDLLIMPEXP_DATA_BINDWXBASE(int) wxluatype_wxClientData;
extern WXDLLIMPEXP_DATA_BINDWXBASE(int) wxluatype_wxClientDataContainer;
extern WXDLLIMPEXP_DATA_BINDWXBASE(int) wxluatype_wxDynamicLibrary;
extern WXDLLIMPEXP_DATA_BINDWXBASE(int) wxluatype_wxDynamicLibraryDetails;
extern WXDLLIMPEXP_DATA_BINDWXBASE(int) wxluatype_wxDynamicLibraryDetailsArray;
extern WXDLLIMPEXP_DATA_BINDWXBASE(int) wxluatype_wxEvent;
extern WXDLLIMPEXP_DATA_BINDWXBASE(int) wxluatype_wxEventFilter;
extern WXDLLIMPEXP_DATA_BINDWXBASE(int) wxluatype_wxEventLoopBase;
extern WXDLLIMPEXP_DATA_BINDWXBASE(int) wxluatype_wxEvtHandler;
extern WXDLLIMPEXP_DATA_BINDWXBASE(int) wxluatype_wxFileType;
extern WXDLLIMPEXP_DATA_BINDWXBASE(int) wxluatype_wxFileType_MessageParameters;
extern WXDLLIMPEXP_DATA_BINDWXBASE(int) wxluatype_wxFileTypeInfo;
extern WXDLLIMPEXP_DATA_BINDWXBASE(int) wxluatype_wxIconLocation;
extern WXDLLIMPEXP_DATA_BINDWXBASE(int) wxluatype_wxMimeTypesManager;
extern WXDLLIMPEXP_DATA_BINDWXBASE(int) wxluatype_wxPathList;
extern WXDLLIMPEXP_DATA_BINDWXBASE(int) wxluatype_wxPlatformInfo;
extern WXDLLIMPEXP_DATA_BINDWXBASE(int) wxluatype_wxString;
extern WXDLLIMPEXP_DATA_BINDWXBASE(int) wxluatype_wxStringClientData;
extern WXDLLIMPEXP_DATA_BINDWXBASE(int) wxluatype_wxStringTokenizer;

#if wxCHECK_VERSION(2,8,0) && wxLUA_USE_wxStandardPaths
    extern WXDLLIMPEXP_DATA_BINDWXBASE(int) wxluatype_wxStandardPaths;
#endif // wxCHECK_VERSION(2,8,0) && wxLUA_USE_wxStandardPaths

#if wxCHECK_VERSION(2,9,0)
    extern WXDLLIMPEXP_DATA_BINDWXBASE(int) wxluatype_wxString_const_iterator;
    extern WXDLLIMPEXP_DATA_BINDWXBASE(int) wxluatype_wxString_iterator;
#endif // wxCHECK_VERSION(2,9,0)

#if wxCHECK_VERSION(2,9,2)
    extern WXDLLIMPEXP_DATA_BINDWXBASE(int) wxluatype_wxVersionInfo;
#endif // wxCHECK_VERSION(2,9,2)

#if wxLUA_USE_wxArrayInt
    extern WXDLLIMPEXP_DATA_BINDWXBASE(int) wxluatype_wxArrayInt;
#endif // wxLUA_USE_wxArrayInt

#if wxLUA_USE_wxArrayString
    extern WXDLLIMPEXP_DATA_BINDWXBASE(int) wxluatype_wxArrayString;
    extern WXDLLIMPEXP_DATA_BINDWXBASE(int) wxluatype_wxSortedArrayString;
#endif // wxLUA_USE_wxArrayString

#if wxLUA_USE_wxClassInfo
    extern WXDLLIMPEXP_DATA_BINDWXBASE(int) wxluatype_wxClassInfo;
#endif // wxLUA_USE_wxClassInfo

#if wxLUA_USE_wxConfig && wxUSE_CONFIG
    extern WXDLLIMPEXP_DATA_BINDWXBASE(int) wxluatype_wxConfig;
    extern WXDLLIMPEXP_DATA_BINDWXBASE(int) wxluatype_wxConfigBase;
    extern WXDLLIMPEXP_DATA_BINDWXBASE(int) wxluatype_wxConfigPathChanger;
    extern WXDLLIMPEXP_DATA_BINDWXBASE(int) wxluatype_wxFileConfig;
    extern WXDLLIMPEXP_DATA_BINDWXBASE(int) wxluatype_wxMemoryConfig;
#endif // wxLUA_USE_wxConfig && wxUSE_CONFIG

#if wxLUA_USE_wxCriticalSection && wxUSE_THREADS
    extern WXDLLIMPEXP_DATA_BINDWXBASE(int) wxluatype_wxCriticalSection;
#endif // wxLUA_USE_wxCriticalSection && wxUSE_THREADS

#if wxLUA_USE_wxCriticalSectionLocker
    extern WXDLLIMPEXP_DATA_BINDWXBASE(int) wxluatype_wxCriticalSectionLocker;
#endif // wxLUA_USE_wxCriticalSectionLocker

#if wxLUA_USE_wxDateSpan && wxUSE_DATETIME
    extern WXDLLIMPEXP_DATA_BINDWXBASE(int) wxluatype_wxDateSpan;
#endif // wxLUA_USE_wxDateSpan && wxUSE_DATETIME

#if wxLUA_USE_wxDateTime && wxUSE_DATETIME
    extern WXDLLIMPEXP_DATA_BINDWXBASE(int) wxluatype_wxDateTime;
    extern WXDLLIMPEXP_DATA_BINDWXBASE(int) wxluatype_wxDateTime_TimeZone;
    extern WXDLLIMPEXP_DATA_BINDWXBASE(int) wxluatype_wxDateTimeArray;
#endif // wxLUA_USE_wxDateTime && wxUSE_DATETIME

#if wxLUA_USE_wxDateTimeHolidayAuthority && wxUSE_DATETIME
    extern WXDLLIMPEXP_DATA_BINDWXBASE(int) wxluatype_wxDateTimeHolidayAuthority;
    extern WXDLLIMPEXP_DATA_BINDWXBASE(int) wxluatype_wxDateTimeWorkDays;
#endif // wxLUA_USE_wxDateTimeHolidayAuthority && wxUSE_DATETIME

#if wxLUA_USE_wxDir
    extern WXDLLIMPEXP_DATA_BINDWXBASE(int) wxluatype_wxDir;
#endif // wxLUA_USE_wxDir

#if wxLUA_USE_wxFile && wxUSE_FILE
    extern WXDLLIMPEXP_DATA_BINDWXBASE(int) wxluatype_wxFile;
    extern WXDLLIMPEXP_DATA_BINDWXBASE(int) wxluatype_wxTempFile;
#endif // wxLUA_USE_wxFile && wxUSE_FILE

#if wxLUA_USE_wxFileName
    extern WXDLLIMPEXP_DATA_BINDWXBASE(int) wxluatype_wxFileName;
#endif // wxLUA_USE_wxFileName

#if wxLUA_USE_wxList && !wxUSE_STL
    extern WXDLLIMPEXP_DATA_BINDWXBASE(int) wxluatype_wxList;
    extern WXDLLIMPEXP_DATA_BINDWXBASE(int) wxluatype_wxNode;
#endif // wxLUA_USE_wxList && !wxUSE_STL

#if wxLUA_USE_wxLog && wxUSE_LOG
    extern WXDLLIMPEXP_DATA_BINDWXBASE(int) wxluatype_wxLog;
    extern WXDLLIMPEXP_DATA_BINDWXBASE(int) wxluatype_wxLogBuffer;
    extern WXDLLIMPEXP_DATA_BINDWXBASE(int) wxluatype_wxLogChain;
    extern WXDLLIMPEXP_DATA_BINDWXBASE(int) wxluatype_wxLogNull;
    extern WXDLLIMPEXP_DATA_BINDWXBASE(int) wxluatype_wxLogPassThrough;
#endif // wxLUA_USE_wxLog && wxUSE_LOG

#if wxLUA_USE_wxObject
    extern WXDLLIMPEXP_DATA_BINDWXBASE(int) wxluatype_wxObject;
    extern WXDLLIMPEXP_DATA_BINDWXBASE(int) wxluatype_wxObjectRefData;
#endif // wxLUA_USE_wxObject

#if wxLUA_USE_wxRegEx && wxUSE_REGEX
    extern WXDLLIMPEXP_DATA_BINDWXBASE(int) wxluatype_wxRegEx;
#endif // wxLUA_USE_wxRegEx && wxUSE_REGEX

#if wxLUA_USE_wxStopWatch && wxUSE_STOPWATCH
    extern WXDLLIMPEXP_DATA_BINDWXBASE(int) wxluatype_wxStopWatch;
#endif // wxLUA_USE_wxStopWatch && wxUSE_STOPWATCH

#if wxLUA_USE_wxSystemOptions
    extern WXDLLIMPEXP_DATA_BINDWXBASE(int) wxluatype_wxSystemOptions;
#endif // wxLUA_USE_wxSystemOptions

#if wxLUA_USE_wxTimeSpan && wxUSE_DATETIME
    extern WXDLLIMPEXP_DATA_BINDWXBASE(int) wxluatype_wxTimeSpan;
#endif // wxLUA_USE_wxTimeSpan && wxUSE_DATETIME

#if wxUSE_FSWATCHER && wxCHECK_VERSION(2,9,4)
    extern WXDLLIMPEXP_DATA_BINDWXBASE(int) wxluatype_wxFileSystemWatcher;
    extern WXDLLIMPEXP_DATA_BINDWXBASE(int) wxluatype_wxFileSystemWatcherEvent;
#endif // wxUSE_FSWATCHER && wxCHECK_VERSION(2,9,4)

#if wxUSE_INTL
    extern WXDLLIMPEXP_DATA_BINDWXBASE(int) wxluatype_wxLanguageInfo;
    extern WXDLLIMPEXP_DATA_BINDWXBASE(int) wxluatype_wxLocale;
#endif // wxUSE_INTL

#if wxUSE_LONGLONG
    extern WXDLLIMPEXP_DATA_BINDWXBASE(int) wxluatype_wxLongLong;
    extern WXDLLIMPEXP_DATA_BINDWXBASE(int) wxluatype_wxULongLong;
#endif // wxUSE_LONGLONG

#if wxUSE_SNGLINST_CHECKER
    extern WXDLLIMPEXP_DATA_BINDWXBASE(int) wxluatype_wxSingleInstanceChecker;
#endif // wxUSE_SNGLINST_CHECKER

#if wxUSE_STREAMS
    extern WXDLLIMPEXP_DATA_BINDWXBASE(int) wxluatype_wxDataInputStream;
    extern WXDLLIMPEXP_DATA_BINDWXBASE(int) wxluatype_wxDataOutputStream;
    extern WXDLLIMPEXP_DATA_BINDWXBASE(int) wxluatype_wxFileInputStream;
    extern WXDLLIMPEXP_DATA_BINDWXBASE(int) wxluatype_wxFileOutputStream;
    extern WXDLLIMPEXP_DATA_BINDWXBASE(int) wxluatype_wxInputStream;
    extern WXDLLIMPEXP_DATA_BINDWXBASE(int) wxluatype_wxMemoryInputStream;
    extern WXDLLIMPEXP_DATA_BINDWXBASE(int) wxluatype_wxOutputStream;
    extern WXDLLIMPEXP_DATA_BINDWXBASE(int) wxluatype_wxStreamBase;
#endif // wxUSE_STREAMS



#endif // __HOOK_WXLUA_wxbase_H__

