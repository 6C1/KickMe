# KickMe

An object-oriented language which inverts traditional notions of member accessibility and data encapsulation.

### Member accessibility

The following set of access specifiers are valid in KickMe, and are applicable to both class attributes and methods:

* __antiprivate__ restricts access to only other classes, blocking any access from the current class and its subclasses.
* __antiprotected__ restricts access to only other classes, or subclasses of the current class, blocking any access from the current class.
* __antipublic__ totally restricts access, blocking any access from any class. This is the default behavior of a class member.

Under __no__ circumstances may a class access its own members.
